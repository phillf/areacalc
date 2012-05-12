/*
 *  rhombus.h
 *  dev-xcode
 *
 *  Created by Phillip Fernandes on 11/11/10.
 *  Copyright 2010 TechWeek Media, Inc. All rights reserved.
 *
 */

int rhombus()
{
	
	system(clearcommand);
	header();
	
	double d1;
	double d2;
	double area;
	
	cout << "Diagonal 1: ";
	getnum(d1, ;);
	
	cout << "Diagonal 1: ";
	getnum(d2, ;);
	
	area = d1 * d2;
	
	cout << "Work: " << d1 << " * " << d2 << " = " << area << endl;
	cout << "Final " << area << endl;
	
	system(sleepcommand);
	
	system(clearcommand);
	
	return 0;
}
