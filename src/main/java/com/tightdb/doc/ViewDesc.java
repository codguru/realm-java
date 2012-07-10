package com.tightdb.doc;

import java.util.List;

public class ViewDesc extends AbstractDesc {

	public ViewDesc(List<Method> methods) {
		super(methods);
	}

	public void describe() {
		method("Row", "at", "Get a specific row", "long", "rowIndex");
		method("void", "clear", "Delete all rows in the view");
		method("Row", "first", "Get the first row");
		method("boolean", "isEmpty", "Check if the view has no rows");
		method("Iterator", "iterator", "Get an iterator for the view rows");
		method("Row", "last", "Get the last row");
		// method("View", "range", "");
		//TODO: method("void", "remove", "Remove a row from the view", "long", "rowIndex");
		method("long", "size", "Get the number of rows in the view");

		// EmployeeView v = null;

	}
}
