#include <iostream>
using namespace std;
int flip(char *,int, int);
int main() {
    // 输入
    char str[501];
    cin.getline(str,501);
    int i = 0, k = 0;
    bool start_flag = true, //新单词开始标志
        flip_flag = false; // 翻转标志

    char word[501] = {'\0'}; 
    while (str[i] != '\0') {
          if (str[i] != ' ') {
             if (start_flag) { // 判断是否为单词开始处
             start_flag = false;
             flip_flag = false;
             k = 0;  //将记录单词的字符串索引置0       
                               }
             word[k++] = str[i];
                     }
          else {
               start_flag = true;
               // 翻转单词并输出
               if (!flip_flag) //防止多空格出现重复翻转
                 {   
                  word[k] = '\0';
                  flip(word,0,k-1);
                  cout << word;
                  flip_flag = true; 
                 } 
                 //输出空格
                 cout << ' '; 
               }
               i++; 
          }
          // 最后一个单词（没有进入循环）
          if (!flip_flag) //防止多空格出现重复翻转
                 {   word[k] = '\0';
                  flip(word,0,k-1);
                  cout << word;
                  flip_flag = true; 
                 } 
    return 0;

}
int flip(char * word, int start, int end) {
    if (start >= end)
    {
      return 0;
    }
    char temp = word[start];
    word[start] = word[end];
    word[end] = temp;
    flip(word, ++start, --end);
    return 0;   
}