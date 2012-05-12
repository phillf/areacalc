/*
 *  rectangle.h
 *  dev-xcode
 *
 *  Created by Phillip Fernandes on 11/11/10.
 *  Copyright 2010 TechWeek Media, Inc. All rights reserved.
 *
 */

int rectangle()
{
	
	system(clearcommand);
	header();
	
	double base;
	double height;
	double area;
	
	cout << "Base: ";
	getnum(base, ;);
	
	cout << "Height: ";
	getnum(height, ;);
	
	area = base * height;
	
	cout << "Work: " << base << " * " << height << " = " << area << endl;
	cout << "Final " << area << endl;
	
	system(sleepcommand);
	
	system(clearcommand);
	
	return 0;
}
