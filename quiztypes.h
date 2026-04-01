#ifndef QUIZTYPES_H
#define QUIZTYPES_H

typedef struct {
  char value;
  char *content;
} Option;

typedef struct {
  char *question;
  Option *options;
  int optionCount;
  char correctValue;
} Question;

typedef struct {
  char *topic;
  Question *questions;
  int questionCount;
} Quiz;

#endif
