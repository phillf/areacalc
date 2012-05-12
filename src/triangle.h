/*
 *  triangle.h
 *  dev-xcode
 *
 *  Created by Phillip Fernandes on 11/11/10.
 *  Copyright 2010 TechWeek Media, Inc. All rights reserved.
 *
 */

int triangle()
{
	
	system(clearcommand);
	header();
	
	double base;
	double height;
	double area;
	double final_area;
	
	cout << "Base: ";
	getnum(base, ;);
	
	cout << "Height: ";
	getnum(height, ;);
	
	area = base * height;
	final_area = 0.5 * area;
	
	cout << "Work: " << base << " * " << height << " = " << area << endl;
	cout << "Work: " << "0.5" << " * " << area << " = " << final_area << endl;
	cout << "Final Answer: " << final_area << endl;
	
	system(sleepcommand);
	
	system(clearcommand);
	
	return 0;
}
