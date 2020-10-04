#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{
  vector <string> home_team_name;
  vector <string> away_team_name;
  vector <int> home_team_score;
  vector <int> away_team_score;

  int limit = 100;

  for (int l = 0; l < 10; l++)
 { 
    string home_name;
    string away_name;
    int home_score;
    int away_score;

    cin >> home_name >> away_name >> home_score >> away_score;

      home_team_name.push_back(home_name);
      away_team_name.push_back(away_name);
      home_team_score.push_back(home_score);
      away_team_score.push_back(away_score);
  }  

  for (int i = 0; i < limit; i++)
  {
    cout << home_team_name[i] << "[" << home_team_score[i] << "]" << " | " << away_team_name[i] << "[" << away_team_score[i] << "]" << endl;  
  }

  return 0;

}