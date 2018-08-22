#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <unordered_set>
#include <set>
#include <vector>

#define SIZE 5

using namespace std;

class Boggle
{
private:
  string board[SIZE][SIZE];
  vector<string> dictionary;
  int minWordLength;
  void findWords(string root, unordered_set<string> path, set<string>& wordsFound, int x, int y);
  void clear();
  void setBoard(string boardValues[SIZE][SIZE]);
  bool findPrefix(string root, int start, int end, bool fullWordOnly);
public:
  Boggle();
  ~Boggle();
  string getBoardString();
  void createRandomBoard();
  bool importBoard(string file_name);
  bool importDictionary(string file_name);
  void setMinWordLength(int length);
  bool isWord(string word);
  bool isPrefix(string prefix);
  set<string> solveBoard();
};
