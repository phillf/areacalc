/*
 *  trapezoid.h
 *  dev-xcode
 *
 *  Created by Phillip Fernandes on 11/11/10.
 *  Copyright 2010 TechWeek Media, Inc. All rights reserved.
 *
 */

int trapezoid()
{
	
	system(clearcommand);
	header();
	
	//begin variable definition
	double length;
	double width;
	double height;
	double prod1;
	double prod2;
	double area;
	
	cout << "Length: ";
	getnum(length, ;);
	
	cout << "Height: ";
	getnum(height, ;);
	
	cout << "Width: ";
	getnum(width, ;);
	
	//begin calculations
	prod1 = 0.5 * height;
	prod2 = length * width;
	area = prod1 * prod2;
	
	cout << "Work: " << "0.5" << " * " << height << " = " << prod1 << endl;
	cout << "Work: " << length << " * " << width << " = " << prod2 << endl;
	cout << "Work: " << prod1 << " * " << prod2 << " = " << area << endl;
	cout << "Final Answer: " << area << endl;
	
	system(sleepcommand);
	
	system(clearcommand);
	
	return 0;
}

