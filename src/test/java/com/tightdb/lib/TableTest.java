package com.tightdb.lib;

import java.util.Date;

import static org.testng.AssertJUnit.*;

import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

import com.tightdb.Mixed;
import com.tightdb.generated.Employee;
import com.tightdb.generated.EmployeeTable;
import com.tightdb.generated.EmployeeView;

public class TableTest {

	protected static final String NAME0 = "John";
	protected static final String NAME1 = "Nikolche";
	protected static final String NAME2 = "Johny";

	protected EmployeeTable employees;

	@BeforeMethod
	public void init() {
		employees = new EmployeeTable();

		employees.add(NAME0, "Doe", 10000, true, new byte[] { 1, 2, 3 }, new Date(), "extra");
		employees.add(NAME2, "B. Good", 10000, true, new byte[] { 1, 2, 3 }, new Date(), true);
		employees.insert(1, NAME1, "Mihajlovski", 30000, false, new byte[] { 4, 5 }, new Date(), 1234);
	}

	@AfterMethod
	public void clear() {
		employees.clear();
		assertEquals(true, employees.isEmpty());
	}

	@Test
	public void shouldRetrieveRowsByIndex() {
		assertEquals(NAME0, employees.at(0).getFirstName());
		assertEquals(NAME1, employees.at(1).getFirstName());
		assertEquals(NAME2, employees.at(2).getFirstName());
	}

	@Test
	public void shouldHaveTwoWaysToReadCellValues() {
		assertEquals(NAME0, employees.at(0).getFirstName());
		assertEquals(NAME0, employees.at(0).firstName.get());
	}

	@Test
	public void shouldHaveTwoWaysToWriteCellValues() {
		employees.at(0).setFirstName("FOO");
		assertEquals("FOO", employees.at(0).getFirstName());

		employees.at(0).firstName.set("BAR");
		assertEquals("BAR", employees.at(0).getFirstName());
	}

	@Test
	public void shouldAllowMixedValues() throws IllegalAccessException {
		assertEquals("extra", employees.at(0).getExtra().getValue());
		assertEquals("extra", employees.at(0).getExtra().getStringValue());

		assertEquals(1234L, employees.at(1).getExtra().getValue());
		assertEquals(1234L, employees.at(1).getExtra().getLongValue());

		assertEquals(true, employees.at(2).getExtra().getValue());
		assertEquals(true, employees.at(2).getExtra().getBooleanValue());

		employees.at(1).setExtra(Mixed.mixedValue("new_value"));
		assertEquals("new_value", employees.at(1).getExtra().getValue());
		assertEquals("new_value", employees.at(1).getExtra().getStringValue());
	}


}
