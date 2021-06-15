//
// Created by user on 21-6-14.
//

#ifndef STUDENTDATABASE_DECLARE_H
#define STUDENTDATABASE_DECLARE_H

#include<stdio.h>
#include<stdlib.h>

#define path "./student.dat"
struct student {
    char name[20];
    char gender[4];
    int age;
    int num;
    struct student *next;
};

void mainWindow();
void exhibitStudent(struct student *head);
void addStudent(struct student *head);
void delStudent(struct student *head);
void updateStudent(struct student *head);
void checkOrder(struct student *head);
void writeData(struct student *head);
void readData(struct student *head);

struct student *createStudent(int num);
struct student *freshData();

#endif //STUDENTDATABASE_DECLARE_H
