#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ID_ARRAY_LENGTH = 26;

//string variable type used to store a list a characters
string input;
string name;

//int or integer variables store whole numbers
int OPI;
int PII[10];
int CTEI[1];
int CSI;
int OPW;
int OPWS;
int NT[3];
int ST[3];
int WT[3];
int ET[3];
int CTT;
int PC[2];
int II[ID_ARRAY_LENGTH];
int WASI[4];
int CWI;
int CAI;
int CTHP[2];
int CTAD;
int CTLT[2];
int OPS;

//float variables hold decimals
float HP[2];

char player = 43;
char empty = 176;
char loot = 36;

bool DD;

void clear()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	cout << "\nPress enter to continue...\n";
	system("read");
	#endif
}

string shieldName (int id) {
  switch(id) {
    case 200:
      return "Wooden Shield";
      break;
    case 201:
      return "Tough Wooden Shield";
      break;
    case 202:
      return "Metal Shield";
      break;
    case 203:
      return "Tough Metal Shield";
      break;
    case 204:
      return "Steel Shield";
      break;
  }
}
float shieldStat(int id, int stat) {
  switch (id) {
    case 200:
      switch (stat) {
        case 0: //Percent chance to deflect dmg
          return 15;
          break;
        case 1: //Percentage of dmg to deflect
          return 25;
          break;
      }
      break;
    case 201:
      switch(stat) {
        case 0:
          return 15;
          break;
        case 1:
          return 45;
          break;
      }
      break;
    case 202:
      switch(stat) {
        case 0:
          return 35;
          break;
        case 1:
          return 25;
          break;
      }
      break;
    case 203:
      switch(stat) {
        case 0:
          return 35;
          break;
        case 1:
          return 45;
          break;
      }
      break;
    case 204:
      switch(stat) {
        case 0:
          return 35;
          break;
        case 1:
          return 100;
          break;
      }
      break;
  }
}
string statName(int id) {
  switch(id) {
    case 100:
      return "Rusty";
      break;
    case 101:
      return "Polished";
      break;
    case 102:
      return "Plain";
      break;
    case 103:
      return "Unfortunate";
      break;
    case 104:
      return "Fortunate";
      break;
    case 105:
      return "Cracked";
      break;
    case 106:
      return "Broad";
      break;
    case 107:
      return "Dull";
      break;
    case 108:
      return "Sharp";
      break;
  }
}
float additionStat(int id, int stat) {
  switch (id) {
    case 100:
      switch(stat) {
        case 0: return 0.8; break; //Damage
        case 1: return 1; break; // multiplier
        case 2: return 1.1; break; // chance
      }
      break;
    case 101:
      switch(stat) {
        case 0: return 1.2; break;
        case 1: return 1; break;
        case 2: return 0.9; break;
      }
      break;
    case 102:
      return 1;
      break;
    case 103:
      switch(stat) {
        case 0: return 1; break;
        case 1: return 1; break;
        case 2: return 0.8; break;
      }
      break;
    case 104:
      switch(stat) {
        case 0: return 1; break;
        case 1: return 1; break;
        case 2: return 1.2; break;
      }
      break;
    case 105:
      switch(stat) {
        case 0: return 1; break;
        case 1: return 0.9; break;
        case 2: return 1; break;
      }
      break;
    case 106:
      switch(stat) {
        case 0: return 1.2; break;
        case 1: return 1.1; break;
        case 2: return 0.8; break;
      }
      break;
    case 107:
      switch(stat) {
        case 0: return 0.8; break;
        case 1: return 1; break;
        case 2: return 1; break;
      }
      break;
    case 108:
      switch(stat) {
        case 0: return 1.2; break;
        case 1: return 1; break;
        case 2: return 1; break;
      }
      break;
  }
}
string weaponName(int id) {
  //Returns the name of the weapon id
  switch(id) {
    case 0:
      return "Basic Sword";
      break;
    case 1:
      return "Basic Dagger";
      break;
    case 2:
      return "Basic Axe";
      break;
    case 3:
      return "Basic Long Sword";
      break;
    case 4:
      return "Advanced Sword";
      break;
    case 5:
      return "Advanced Dagger";
      break;
    case 6:
      return "Advanced Axe";
      break;
    case 7:
      return "Advanced Long Sword";
      break;
    case 8:
      return "Basic Battle Axe";
      break;
    case 9:
      return "Advanced Battle Axe";
      break;
    case 10:
      return "Combat Sword";
      break;
    case 11:
      return "Combat Dagger";
      break;
    case 12:
      return "Combat Axe";
      break;
    case 13:
      return "Combat Long Sword";
      break;
  }
}
float weaponStat(int id, int stat) {
  //Returns the number of the stat in the id
  switch(id) {
    case 0: //Basic Sword
      switch(stat) {
        case 0:
          return 6; // damage
          break;
        case 1:
          return 2; // Brutal Multiplier
          break;
        case 2:
          return 25; // Brutal Chance
          break;
      }
      break;
    case 1: //Basic Dagger
      switch(stat) {
        case 0:
          return 1;
          break;
        case 1:
          return 14;
          break;
        case 2:
          return 50;
          break;
      }
      break;
    case 2: //Basic Axe
      switch(stat) {
        case 0:
          return 5;
          break;
        case 1:
          return 5;
          break;
        case 2:
          return 12.5;
          break;
      }
      break;
    case 3: //Basic Long Sword
      switch(stat) {
        case 0:
          return 7;
          break;
        case 1:
          return 2.3
          ;
          break;
        case 2:
          return 5;
          break;
      }
      break;
    case 4: //Advanced Sword
      switch(stat) {
        case 0:
          return 8;
          break;
        case 1:
          return 2;
          break;
        case 2:
          return 30;
          break;
      }
      break;
    case 5: //Advanced Dagger
      switch(stat) {
        case 0:
          return 1;
          break;
        case 1:
          return 20;
          break;
        case 2:
          return 50;
          break;
      }
      break;
    case 6: //Advanced Axe
      switch(stat) {
        case 0:
          return 7;
          break;
        case 1:
          return 5;
          break;
        case 2:
          return 14;
          break;
      }
      break;
    case 7: //Advanced Long Sword
      switch(stat) {
        case 0:
          return 10;
          break;
        case 1:
          return 2.5;
          break;
        case 2:
          return 5;
          break;
      }
      break;
    case 8: //Basic Battle Axe
      switch(stat) {
        case 0:
          return 12;
          break;
        case 1:
          return 3;
          break;
        case 2:
          return 5;
          break;
      }
      break;
    case 9: //Advanced Battle Axe
      switch(stat) {
        case 0:
          return 15;
          break;
        case 1:
          return 4;
          break;
        case 2:
          return 10;
          break;
      }
      break;
    case 10: //Combat Sword
      switch(stat) {
        case 0:
          return 13;
          break;
        case 1:
          return 2.5;
          break;
        case 2:
          return 30;
          break;
      }
      break;
    case 11: //Combat Dagger
      switch(stat) {
        case 0:
          return 1;
          break;
        case 1:
          return 25;
          break;
        case 2:
          return 75;
          break;
        }
        break;
    case 12: //Combat axe
      switch(stat) {
        case 0:
          return 12;
          break;
        case 1:
          return 5;
          break;
        case 2:
          return 15;
          break;
        }
        break;
    case 13: //Combat Long Sword
      switch(stat) {
        case 0:
          return 17;
          break;
        case 1:
          return 2.5;
          break;
        case 2:
          return 10;
          break;
        }
        break;
  }
}
int r;
int randNumber(int min = 0, int max = 1) {
  r = (rand() % (max+1-min))+min;
  return r;
}
int tiles[100000][9]; // 0 x, 1 y, 2 id, 3 current hp, 4 max hp, 5 attack dmg, 6 teir loot, 7 loot type, 8 attack engaged <for defenders
int tileLength = 0;
void newTile(int x, int y, bool isRand = true, int id = 0) {
  if (isRand == true) {
    if (randNumber(1, 10) <= 1 && DD == true) {
      id = randNumber(0, 4);
    } else {
      id = randNumber(0, 3);
    }
  }
  tiles[tileLength][0] = x;
  tiles[tileLength][1] = y;
  tiles[tileLength][2] = id;
  if (id == 2) {
    int mh = randNumber(20, 50);
    tiles[tileLength][3] = mh;
    tiles[tileLength][4] = mh;
    tiles[tileLength][5] = randNumber(5, 10);
  } else if (id == 1) {
    tiles[tileLength][6] = 1;
    if (randNumber(1, 10) <= 1) {
      tiles[tileLength][7] = 3;
    } else {
      tiles[tileLength][7] = 1;
    }
  } else if (id == 3) {
    int mh = randNumber(100, 200);
    tiles[tileLength][3] = mh;
    tiles[tileLength][4] = mh;
    tiles[tileLength][5] = randNumber(5, 10);
    tiles[tileLength][8] = false;
  } else if (id == 4) {
    int mh = randNumber(250, 300);
    tiles[tileLength][3] = mh;
    tiles[tileLength][4] = mh;
    tiles[tileLength][5] = randNumber(10, 15);
  }
  tileLength++;
}
void tilePlayer() {
  bool INT = false; bool IST = false; bool IWT = false; bool IET = false;
  for (int i = 0; i < tileLength; i++) {
    //Checks for tiles north, south, west and east of player
    if (tiles[i][1] == PC[1]-1 && tiles[i][0] == PC[0]) { INT = true; }
    if (tiles[i][1] == PC[1]+1 && tiles[i][0] == PC[0]) { IST = true; }
    if (tiles[i][0] == PC[0]-1 && tiles[i][1] == PC[1]) { IWT = true; }
    if (tiles[i][0] == PC[0]+1 && tiles[i][1] == PC[1]) { IET = true; }
  }
  //Places none existint tiles north, south, west and east of player
  if (INT == false) { newTile(PC[0], PC[1]-1); }
  if (IST == false) { newTile(PC[0], PC[1]+1); }
  if (IWT == false) { newTile(PC[0]-1, PC[1]); }
  if (IET == false) { newTile(PC[0]+1, PC[1]); }
  for (int i = 0; i < tileLength; i++) {
    //Gathers information about tiles arround player and puts them into variables
    if (tiles[i][1] == PC[1]-1 && tiles[i][0] == PC[0]) { for (int x = 0; x < 3; x++) { NT[x] = tiles[i][x]; } }
    if (tiles[i][1] == PC[1]+1 && tiles[i][0] == PC[0]) { for (int x = 0; x < 3; x++) { ST[x] = tiles[i][x]; } }
    if (tiles[i][0] == PC[0]-1 && tiles[i][1] == PC[1]) { for (int x = 0; x < 3; x++) { WT[x] = tiles[i][x]; } }
    if (tiles[i][0] == PC[0]+1 && tiles[i][1] == PC[1]) { for (int x = 0; x < 3; x++) { ET[x] = tiles[i][x]; } }
  }
}
string tileType(int id) {
  switch (id) {
    case 0:
      return "Empty";
      break;
    case 1:
      return "Loot";
      break;
    case 2:
      return "Attack";
      break;
    case 3:
      return "Defender";
      break;
    case 4:
      return "Guard";
      break;
  }
}
float determineStat(int weaponID, int statID, int stat) {
  if (weaponStat(weaponID, stat) * additionStat(statID, stat) <= 0 && (stat == 0 || stat == 1)) {
    return 1;
  } else if (weaponStat(weaponID, stat) * additionStat(statID, stat) < 0) {
    return 0;
  } else {
    return weaponStat(weaponID, stat) * additionStat(statID, stat);
  }
}
float dmgAverage(int weaponID, int statID) {
  return ( ( determineStat(weaponID, statID, 0) * determineStat(weaponID, statID, 1) ) - determineStat(weaponID, statID, 0) )// (dmg * brutal dmg - dmg) * (brutal chance /100) + dmg
  * (determineStat(weaponID, statID, 2)/100) + determineStat(weaponID, statID, 0);
}
float determineAttack(int weaponID, int statID) {
  if (randNumber(1, 100) <= determineStat(weaponID, statID, 2)) {
    return determineStat(weaponID, statID, 0) * determineStat(weaponID, statID, 1);
  } else {
    return determineStat(weaponID, statID, 0);
  }
}
char MC(int x, int y) {
  bool generatedTile = false;
  for (int i = 0; i < tileLength; i++) {
    if (tiles[i][0] == x && tiles[i][1] == y) {
      generatedTile = true;
      if (tiles[i][2] == 0) { return 176; } else if (tiles[i][2] == 1) { return 36; }
      else if (tiles[i][2] == 2) { return 178; } else if (tiles[i][2] == 3 && tiles[i][8] == false) { return 68; }
      else if (tiles[i][2] == 3 && tiles[i][8] == true) { return 69; } else if (tiles[i][2] == 4) { return 37; }
    }
  }
  if (generatedTile == false) { return 32; }
}
void mapDisplay() {
  //Display a map for the player
  cout << MC(PC[0]-4,PC[1]-4) << MC(PC[0]-3,PC[1]-4) << MC(PC[0]-2,PC[1]-4) << MC(PC[0]-1,PC[1]-4)
  << MC(PC[0],PC[1]-4) << MC(PC[0]+1,PC[1]-4) << MC(PC[0]+2,PC[1]-4) << MC(PC[0]+3,PC[1]-4) << MC(PC[0]+4,PC[1]-4)

  << endl << MC(PC[0]-4,PC[1]-3) << MC(PC[0]-3,PC[1]-3) << MC(PC[0]-2,PC[1]-3) << MC(PC[0]-1,PC[1]-3)
  << MC(PC[0],PC[1]-3) << MC(PC[0]+1,PC[1]-3) << MC(PC[0]+2,PC[1]-3) << MC(PC[0]+3,PC[1]-3) << MC(PC[0]+4,PC[1]-3)

  << endl << MC(PC[0]-4,PC[1]-2) << MC(PC[0]-3,PC[1]-2) << MC(PC[0]-2,PC[1]-2) << MC(PC[0]-1,PC[1]-2)
  << MC(PC[0],PC[1]-2) << MC(PC[0]+1,PC[1]-2) << MC(PC[0]+2,PC[1]-2) << MC(PC[0]+3,PC[1]-2) << MC(PC[0]+4,PC[1]-2)

  << endl << MC(PC[0]-4,PC[1]-1) << MC(PC[0]-3,PC[1]-1) << MC(PC[0]-2,PC[1]-1) << MC(PC[0]-1,PC[1]-1)
  << MC(PC[0],PC[1]-1) << MC(PC[0]+1,PC[1]-1) << MC(PC[0]+2,PC[1]-1) << MC(PC[0]+3,PC[1]-1) << MC(PC[0]+4,PC[1]-1)

  << endl << MC(PC[0]-4,PC[1]) << MC(PC[0]-3,PC[1]) << MC(PC[0]-2,PC[1]) << MC(PC[0]-1,PC[1])
  << player << MC(PC[0]+1,PC[1]) << MC(PC[0]+2,PC[1]) << MC(PC[0]+3,PC[1]) << MC(PC[0]+4,PC[1])

  << endl << MC(PC[0]-4,PC[1]+1) << MC(PC[0]-3,PC[1]+1) << MC(PC[0]-2,PC[1]+1) << MC(PC[0]-1,PC[1]+1)
  << MC(PC[0],PC[1]+1) << MC(PC[0]+1,PC[1]+1) << MC(PC[0]+2,PC[1]+1) << MC(PC[0]+3,PC[1]+1) << MC(PC[0]+4,PC[1]+1)

  << endl << MC(PC[0]-4,PC[1]+2) << MC(PC[0]-3,PC[1]+2) << MC(PC[0]-2,PC[1]+2) << MC(PC[0]-1,PC[1]+2)
  << MC(PC[0],PC[1]+2) << MC(PC[0]+1,PC[1]+2) << MC(PC[0]+2,PC[1]+2) << MC(PC[0]+3,PC[1]+2) << MC(PC[0]+4,PC[1]+2)

  << endl << MC(PC[0]-4,PC[1]+3) << MC(PC[0]-3,PC[1]+3) << MC(PC[0]-2,PC[1]+3) << MC(PC[0]-1,PC[1]+3)
  << MC(PC[0],PC[1]+3) << MC(PC[0]+1,PC[1]+3) << MC(PC[0]+2,PC[1]+3) << MC(PC[0]+3,PC[1]+3) << MC(PC[0]+4,PC[1]+3)

  << endl << MC(PC[0]-4,PC[1]+4) << MC(PC[0]-3,PC[1]+4) << MC(PC[0]-2,PC[1]+4) << MC(PC[0]-1,PC[1]+4)
  << MC(PC[0],PC[1]+4) << MC(PC[0]+1,PC[1]+4) << MC(PC[0]+2,PC[1]+4) << MC(PC[0]+3,PC[1]+4) << MC(PC[0]+4,PC[1]+4);
}
void currentTileStatus() {
  for (int i = 0; i < tileLength; i++) {
    if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) {
      CTT = tiles[i][2];
      if (tiles[i][2] == 2 || tiles[i][2] == 3 || tiles[i][2] == 4) {
        CTHP[0] = tiles[i][3];
        CTHP[1] = tiles[i][4];
        CTAD = tiles[i][5];
      }
      if (tiles[i][2] == 1) {
        CTLT[0] = tiles[i][6];
        CTLT[1] = tiles[i][7];
      }
      if (tiles[i][2] == 3) {
        CTEI[0] = tiles[i][8];
      }
    }
  }
}
int randWeapon(int tier) { //Type 1
  if (tier == 1) {
    return randNumber(0, 3);
  } else if (tier == 2) {
    return randNumber(4, 7);
  } else if (tier == 3) {
    return 8;
  } else if (tier == 4) {
    return randNumber(9, 13);
  }
}
int randShield(int tier) { //Type 2
  if (tier == 1) {
    return randNumber(201, 203);
  } else if (tier == 2) {
    return 204;
  }
}
int randItem(int tier) { //Type 3
  if (tier == 1) {
    return 300;
  } else if (tier == 2) {
    return randNumber(300, 301);
  } else if (tier == 3) {
    return 302;
  }
}
float shieldAction(int shieldID) {
  if (randNumber(1, 100) <= shieldStat(shieldID, 0)) {
    return (1-(shieldStat(shieldID, 1)/100));
  } else {
    return 1;
  }
}
string inventoryID(int id) {
  switch(id) {
    case -1:
      return "Empty";
      break;
    case 300:
      return "Minor Health Potion, heals 20";
      break;
    case 301:
      return "Medium Health Potion, heals 35";
      break;
    case 302:
      return "Major Health Potion, heals 75";
      break;
  }
}
int itemStat(int id) {
  switch(id) {
    case 300:
      return 20;
      break;
    case 301:
      return 35;
      break;
    case 302:
      return 75;
      break;
  }
}
void displayInv() {
  clear();
  cout << "1: " << inventoryID(PII[0]) << "\n2: " << inventoryID(PII[1]) << "\n3: " << inventoryID(PII[2]) << "\n4: " << inventoryID(PII[3])
  << "\n5: " << inventoryID(PII[4]) << "\n6: " << inventoryID(PII[5]) << "\n7: " << inventoryID(PII[6]) << "\n8: " << inventoryID(PII[7])
  << "\n9: " << inventoryID(PII[8]) << "\n10: " << inventoryID(PII[9]) << endl << name << "s HP " << HP[0] << "/" << HP[1] << "\nCurrent Weapon: " << statName(CAI) << " "
  << weaponName(CWI) << " <" << determineStat(CWI, CAI, 0) << " Dmg, " << determineStat(CWI, CAI, 1)
  << "x BrutalDmg, " << determineStat(CWI, CAI, 2) << " Brutal Luck, " << dmgAverage(CWI, CAI)
  << " Average Dmg>\n\nCurrent Shield: " << shieldName(CSI) << " <"
  << shieldStat(CSI, 0) << " Deflect Luck, " << shieldStat(CSI, 1) << " Deflect Percentage>";
}
void inventory(bool dontExit = false) {
  do {
    do {
      displayInv();
      cout << "\n\n#: Use item\ne: Exit inventory\n>";
      cin >> input;
    } while(input != "1"&&input != "2"&&input != "3"&&input != "4"&&input != "5"
      &&input != "6"&&input != "7"&&input != "8"&&input != "9"&&input != "10"&&input != "e");
    if (input=="1") {HP[0] += itemStat(PII[0]); PII[0] = -1;} else
    if (input=="2") {HP[0] += itemStat(PII[1]); PII[1] = -1;} else
    if (input=="3") {HP[0] += itemStat(PII[2]); PII[2] = -1;} else
    if (input=="4") {HP[0] += itemStat(PII[3]); PII[3] = -1;} else
    if (input=="5") {HP[0] += itemStat(PII[4]); PII[4] = -1;} else
    if (input=="6") {HP[0] += itemStat(PII[5]); PII[5] = -1;} else
    if (input=="7") {HP[0] += itemStat(PII[6]); PII[6] = -1;} else
    if (input=="8") {HP[0] += itemStat(PII[7]); PII[7] = -1;} else
    if (input=="9") {HP[0] += itemStat(PII[8]); PII[8] = -1;} else
    if (input=="10") {HP[0] += itemStat(PII[9]); PII[9] = -1;} else
    if (input=="e") { dontExit = false; }
    if (HP[0] >= HP[1]) { HP[0] = HP[1]; }
  } while(dontExit);
}
//Main function
int main()
{
    //const or constant variable being used to constantly set value to another variable and help explain what the variable is
    //const char MAP_CHARACTERS[MAP_ARRAY_LENGTH];
    const int PLAYER_INVENTORY_IDs[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
    const int STAT_ID_MINMAX[2]  = {100, 108};
    const int OFFER_PLAYER_WEAPON = -1;
    const int OFFER_PLAYER_WEAPON_STAT = -1;
    const int OFFER_PLAYER_SHIELD = -1;
    const int OFFER_PLAYER_ITEM = -1;
    const int NORTH_TILE[3] = {0, 0, 0};
    const int SOUTH_TILE[3] = {0, 0, 0};
    const int WEST_TILE[3] = {0, 0, 0};
    const int EAST_TILE[3] = {0, 0, 0};
    const int CURRENT_TILE_TYPE = 0;
    const int CURRENT_TILE_HEALTH_POINTS[2] = { 0, 0 };
    const int CURRENT_TILE_ATTACK_DMG = 0;
    const int CURRENT_TILE_LOOT_TIER[2] = { 1, 1 };
    const int ITEM_IDs[ID_ARRAY_LENGTH] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 100, 101, 102, 103, 104, 105, 106, 107, 108, 200, 201, 202, 203, 204, 300, 301, 302 };
    const int CURRENT_WEAPON_ID = 0;
    const int CURRENT_ADDITION_ID = 0;
    const int CURRENT_SHIELD_ID = 200;
    const int PLAYER_CORDINATES_XY[2] = { 0, 0 };

    const bool DEFEATED_DEFENDER = false;
    const bool CURRENT_TILE_EXTRA_INFO[1] = { false };

    const float HEALTH_POINTS[2] = { 100, 100 };

    DD = DEFEATED_DEFENDER;
    OPI = OFFER_PLAYER_ITEM;
    for (int i = 0; i < 10; i++) { PII[i] = PLAYER_INVENTORY_IDs[i]; }
    CTEI[0] = CURRENT_TILE_EXTRA_INFO[0];
    OPS = OFFER_PLAYER_SHIELD;
    CSI = CURRENT_SHIELD_ID;
    CTLT[0] = CURRENT_TILE_LOOT_TIER[0];
    CTLT[1] = CURRENT_TILE_LOOT_TIER[1];
    CTAD = CURRENT_TILE_ATTACK_DMG;
    CTHP[0] = CURRENT_TILE_HEALTH_POINTS[0];
    CTHP[1] = CURRENT_TILE_HEALTH_POINTS[1];
    OPWS = OFFER_PLAYER_WEAPON_STAT;
    OPW = OFFER_PLAYER_WEAPON;
    CAI = CURRENT_ADDITION_ID;
    PC[0] = PLAYER_CORDINATES_XY[0];
    PC[1] = PLAYER_CORDINATES_XY[1];
    for (int i = 0; i < ID_ARRAY_LENGTH; i++) { II[i] = ITEM_IDs[i];  }
    for (int i = 0; i < 3; i++) {
      NT[i] = NORTH_TILE[i];
      ST[i] = SOUTH_TILE[i];
      WT[i] = WEST_TILE[i];
      ET[i] = EAST_TILE[i];
    }
    CTT = CURRENT_TILE_TYPE;
    HP[0] = HEALTH_POINTS[0];
    HP[1] = HEALTH_POINTS[1];
    CWI = CURRENT_WEAPON_ID;

    srand( time(0) );
    cout << "seed: " << time(0) << endl;

    cout << "Hello Player\n";
    pause();
    clear();
    cout << "What is your name: ";
    //cin or console input is what the user types into the console and >> is used to take out the input and put it into the input variable i created
    cin >> name;
    clear();
    system("color 07");
    cout << "Hello " << name << endl;
    pause();
    //do while command repeats code until while statement is false
    do {
      clear();
      //Player picks starting weapon
      cout << "Pick a weapon\nq: Basic Sword <" << determineStat(0, 102, 0) << " Dmg, " << determineStat(0, 102, 1)
      << "x BrutalDmg, " << determineStat(0, 102, 2) << " Brutal Luck, " << dmgAverage(0, 102) << " Average Dmg>\nw: Basic Dagger <"
      << determineStat(1, 102, 0) << " Dmg, " << determineStat(1, 102, 1) << "x BrutalDmg, " << determineStat(1, 102, 2)
      << " Brutal Luck, " << dmgAverage(1, 102) << " Average Dmg>\na: Basic Axe <" << determineStat(2, 102, 0) << " Dmg, "
      << determineStat(2, 102, 1) << "x BrutalDmg, " << determineStat(2, 102, 2) << " Brutal Luck, " << dmgAverage(2, 102)
      << " Average Dmg>\ns: Basic LongSword <" << determineStat(3, 102, 0) << " Dmg, " << determineStat(3, 102, 1) << "x BrutalDmg, "
      << determineStat(3, 102, 2) << " Brutal Luck, " << dmgAverage(3, 102) << " Average Dmg>\n>";

      cin >> input;
    } while(input != "q" && input != "w" && input != "a" && input != "s");
    if (input == "q") { CWI = II[0]; } else if (input == "w") { CWI = II[1]; } else if (input == "a") { CWI = II[2]; } else { CWI = II[3]; }
    CAI = randNumber(STAT_ID_MINMAX[0], STAT_ID_MINMAX[1]);
    clear();
    cout << "You picked a " << weaponName(CWI) << " with stat " << statName(CAI) << endl << "Damage: " << determineStat(CWI, CAI, 0) <<
    endl << "Brutal Damage Multiplier: " << determineStat(CWI, CAI, 1) << endl << "Brutal Hit Luck: " << determineStat(CWI, CAI, 2)
    << "\nAverage Damage: " << dmgAverage(CWI, CAI) << "\n\nRecieved wooden shield\n";
    pause();
    clear();
    newTile(0, 0, false, 0);
    cout << "Good Luck\n";
    pause();
    do { //DO WHILE START <-----------------------------
        do {
          clear();
          tilePlayer();
          currentTileStatus();

          if (CTT == 1) {//Loot tile
            if (CTLT[1] == 1) {
              if (OPW == -1 || OPWS == -1) {
                OPW = randWeapon(CTLT[0]);
                OPWS = randNumber(STAT_ID_MINMAX[0], STAT_ID_MINMAX[1]);
              }
              mapDisplay();
              cout << endl << name << "s HP: " << HP[0] << "/" << HP[1] << "\nw: North, " << tileType(NT[2]) << "\na: West, "
              << tileType(WT[2]) << "\ns: South, " << tileType(ST[2]) << "\nd: East, " << tileType(ET[2]) << "\nq: Inventory\nX: "
              << PC[0] << " Y: " << PC[1];
              cout << "\n\nYou scavanged a " << statName(OPWS) << " " << weaponName(OPW) << ".\nTake weapon?\ny: Yes\nn: No\nv: View stats\n>";
            } else if (CTLT[1] == 2) {
              if (OPS == -1) {
                OPS = randShield(CTLT[0]);
              }
              mapDisplay();
              cout << endl << name << "s HP: " << HP[0] << "/" << HP[1] << "\nw: North, " << tileType(NT[2]) << "\na: West, "
              << tileType(WT[2]) << "\ns: South, " << tileType(ST[2]) << "\nd: East, " << tileType(ET[2]) << "\nq: Inventory\nX: "
              << PC[0] << " Y: " << PC[1];
              cout << "\n\nYou scavanged a " << shieldName(OPS) << ".\nTake shield?\ny: Yes\nn: No\nv: View stats\n--";
            } else if (CTLT[1] == 3) {
              if (OPI == -1) {
                OPI = randItem(CTLT[0]);
              }
              displayInv();
              cout << "\n\nPlace " << inventoryID(OPI) << " in inventory slot\n#: Place item\nt: Trash item\n>";
            }
          } else if (CTT == 0) {//Empty tile
            mapDisplay();
            cout << endl << name << "s HP: " << HP[0] << "/" << HP[1] << "\nw: North, " << tileType(NT[2]) << "\na: West, "
            << tileType(WT[2]) << "\ns: South, " << tileType(ST[2]) << "\nd: East, " << tileType(ET[2]) << "\nq: Inventory\nX: "
            << PC[0] << " Y: " << PC[1] << "\n>";

          } else if (CTT == 2) {//Attack tile
              cout << "Attack tile\nTile HP: " << CTHP[0] << "/" << CTHP[1] << "\nTile Attack Dmg: " << CTAD << endl << name << "s HP: " <<
              HP[0] << "/" << HP[1] << "\n\nAttack tile?\nf: Attack\nr: Retreat\nq: Inventory\n>";
          } else if (CTT == 3) {//Defender tile
            if (CTEI[0] == true) {
              cout << "Defender tile\nTile HP: " << CTHP[0] << "/" << CTHP[1] << "\nTile Attack Dmg: " << CTAD << endl << name << "s HP: " <<
              HP[0] << "/" << HP[1] << "\n\nAttack tile?\nf: Attack\nr: Retreat\nq: Inventory\n>";
            } else {
              mapDisplay();
              cout << endl << name << "s HP: " << HP[0] << "/" << HP[1] << "\nw: North, " << tileType(NT[2]) << "\na: West, "
              << tileType(WT[2]) << "\ns: South, " << tileType(ST[2]) << "\nd: East, " << tileType(ET[2]) << "\nq: Inventory\nX: "
              << PC[0] << " Y: " << PC[1];

              cout << "\n\nDefender tile\nTile Hp: " << CTHP[0] << "/" << CTHP[1] << "\nTile Attack Dmg: " << CTAD
              << "\nAttack tile?\nf: Attack\n>";
            }
          } else if (CTT == 4) {
            cout << "Guard tile\nTile HP: " << CTHP[0] << "/" << CTHP[1] << "\nTile Attack Dmg: " << CTAD << endl << name << "s HP: " <<
            HP[0] << "/" << HP[1] << "\n\nf: Attack\nq: Inventory\n>";
          }
          cin >> input;
        } while(input != "w" && input != "a" && input != "s" && input != "d" && input != "y" && input != "n"
          && input != "v" && input != "r" && input != "1" && input != "2" && input != "3" && input != "4"
          && input != "5" && input != "6" && input != "7" && input != "8" && input != "9" && input != "10"
          && input != "q" && input != "f");//WHILE END <-----------

        if (CTT == 0) {//Empty tile
          if (input == "w") { PC[1]--; }
          if (input == "a") { PC[0]--; }
          if (input == "s") { PC[1]++; }
          if (input == "d") { PC[0]++; }
          if (input == "q") { inventory(true); }

        } else if (CTT == 1) {//Loot tile
          if (CTLT[1] == 1) {
            if (input=="w"||input=="a"||input=="s"||input=="d") {
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][2] = 0; } }
              OPW = -1;
              OPWS = -1;
            }
            if (input == "w") { PC[1]--; } else
            if (input == "a") { PC[0]--; } else
            if (input == "s") { PC[1]++; } else
            if (input == "d") { PC[0]++; } else
            if (input == "q") { inventory(true); }
            else if (input == "y") {
              CWI = OPW;
              CAI = OPWS;
              OPW = -1;
              OPWS = -1;
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][2] = 0; } }
            } else if (input == "n") {
              OPW = -1;
              OPWS = -1;
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][2] = 0; } }
            } else if (input == "v") {
              clear();
              cout << "Current Weapon: " << statName(CAI) << " " << weaponName(CWI) << " <" << determineStat(CWI, CAI, 0) << " Dmg, "
              << determineStat(CWI, CAI, 1) << "x BrutalDmg, " << determineStat(CWI, CAI, 2) << " Brutal Luck, "
              << dmgAverage(CWI, CAI) << " Average Dmg>\n\nScavanged Weapon: " << statName(OPWS) << " " << weaponName(OPW)
              << " <" << determineStat(OPW, OPWS, 0) << " Dmg, " << determineStat(OPW, OPWS, 1) << "x BrutalDmg, "
              << determineStat(OPW, OPWS, 2) << " Brutal Luck, " << dmgAverage(OPW, OPWS) << " Average Dmg>\n\n";
              pause();
            } else {
              clear();
              cout << "Invalid Input\n";
              pause();
            }
          } else if (CTLT[1] == 2) {
            if (input=="w"||input=="a"||input=="s"||input=="d") {
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][2] = 0; } }
              OPS = -1;
            }
            if (input == "w") { PC[1]--; } else
            if (input == "a") { PC[0]--; } else
            if (input == "s") { PC[1]++; } else
            if (input == "d") { PC[0]++; } else
            if (input == "q") { inventory(true); }
            else if (input == "y") {
              CSI = OPS;
              OPS = -1;
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][2] = 0; } }
            } else if (input == "n") {
              OPS = -1;
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][2] = 0; } }
            } else if (input == "v") {
              clear();
              cout << "Current Shield: " << shieldName(CSI) << " <" << shieldStat(CSI, 0) << " Deflect Luck, "
              << shieldStat(CSI, 1) << " Deflect Percentage>\n\nScavanged Shield: " << shieldName(OPS) << " <"
              << shieldStat(OPS, 0) << " Deflect Luck, " << shieldStat(OPS, 1) << " Deflect Percentage>\n\n";
              pause();
            } else {
              cout << "Invalid Input\n";
              pause();
            }
          } else if (CTLT[1] == 3) {
              if(input=="1") {PII[0] = OPI; OPI = -1;} else
              if(input=="2") {PII[1] = OPI; OPI = -1;} else
              if(input=="3") {PII[2] = OPI; OPI = -1;} else
              if(input=="4") {PII[3] = OPI; OPI = -1;} else
              if(input=="5") {PII[4] = OPI; OPI = -1;} else
              if(input=="6") {PII[5] = OPI; OPI = -1;} else
              if(input=="7") {PII[6] = OPI; OPI = -1;} else
              if(input=="8") {PII[7] = OPI; OPI = -1;} else
              if(input=="9") {PII[8] = OPI; OPI = -1;} else
              if(input=="10") {PII[9] = OPI; OPI = -1;} else
              if(input=="t") {OPI = -1;}
              else {
                clear();
                cout << "Invalid Input\n";
                pause();
              }
              if (input=="1"||input=="2"||input=="3"||input=="4"||input=="5"||input=="6"
              ||input=="7"||input=="8"||input=="9"||input=="10"||input=="t") {
                for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][2] = 0; } }
              }

          }

        } else if (CTT == 2) {//Attack tile
          clear();
          if (input == "r") {
            cout << "Tile deals " << CTAD << " dmg\n";
            HP[0] -= CTAD;
            pause();
            if (HP[0] > 0) {
              do {
                clear();
                mapDisplay();
                cout << endl << name << "s HP: " << HP[0] << "/" << HP[1] << "\nw: North, " << tileType(NT[2]) << "\na: West, "
                << tileType(WT[2]) << "\ns: South, " << tileType(ST[2]) << "\nd: East, " << tileType(ET[2]) << "\nX: "
                << PC[0] << " Y: " << PC[1] << "\n>";
                cin >> input;
              } while(input != "w" && input != "a" && input != "s" && input != "d");
              if (input == "w") { PC[1]--; }
              if (input == "a") { PC[0]--; }
              if (input == "s") { PC[1]++; }
              if (input == "d") { PC[0]++; }
            }
          } else if (input == "f") {
            clear();
            float P_DMG = determineAttack(CWI, CAI); // Player Damage
            for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][3] -= P_DMG; } }
            currentTileStatus();
            if (CTHP[0] > 0) {
              float E_DMG = CTAD * shieldAction(CSI); // Enemy Damage
              cout << "You deal " << P_DMG << " dmg\nTile deals " << E_DMG << " dmg\n";
              HP[0] -= E_DMG;
            } else {
              cout << "You deal " << P_DMG << " dmg\nYou've defeated the tile\n";
              for (int i = 0; i < tileLength; i++) {
                if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) {
                  if (randNumber(1, 4) <= 3) {
                    tiles[i][2] = 1;
                    tiles[i][6] = 2;
                    tiles[i][7] = 3;
                  } else {
                    tiles[i][2] = 1;
                    tiles[i][6] = 2;
                    tiles[i][7] = 1;
                  }
                }
              }
            }
            pause();
          } else if (input == "q") {
            inventory();
            clear();
            cout << "Tile deals " << CTAD << " dmg\n";
            HP[0] -= CTAD;
            pause();
          } else {
            clear();
            cout << "Invalid Input.\n";
            pause();
          }
        } else if (CTT == 3) { //Defender tile
          clear();
          if (input == "w" && CTEI[0] == false) { PC[1]--; } else
          if (input == "a" && CTEI[0] == false) { PC[0]--; } else
          if (input == "s" && CTEI[0] == false) { PC[1]++; } else
          if (input == "d" && CTEI[0] == false) { PC[0]++; }
          else if (input == "r" && CTEI[0] == true) {
            cout << "Tile deals " << CTAD << " dmg\n";
            HP[0] -= CTAD;
            pause();
            if (HP[0] > 0) {
              do {
                clear();
                mapDisplay();
                cout << endl << name << "s HP: " << HP[0] << "/" << HP[1] << "\nw: North, " << tileType(NT[2]) << "\na: West, "
                << tileType(WT[2]) << "\ns: South, " << tileType(ST[2]) << "\nd: East, " << tileType(ET[2]) << "\nX: "
                << PC[0] << " Y: " << PC[1] << "\n>";
                cin >> input;
              } while(input != "w" && input != "a" && input != "s" && input != "d");
              if (input == "w") { PC[1]--; }
              if (input == "a") { PC[0]--; }
              if (input == "s") { PC[1]++; }
              if (input == "d") { PC[0]++; }
            }
          } else if (input == "q") {
            if (CTEI[0] == true) {
              inventory();
              clear();
              cout << "Tile deals " << CTAD << " dmg\n";
              HP[0] -= CTAD;
              pause();
            } else {
              inventory(true);
            }
          } else if (input == "f") {
            float P_DMG = determineAttack(CWI, CAI);
            float E_DMG = CTAD * shieldAction(CSI);
            for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][3] -= P_DMG; } }
            currentTileStatus();
            if (CTHP[0] > 0) {
              cout << "You deal " << P_DMG << " dmg\nTile deals " << E_DMG << " dmg\n";
              HP[0] -= E_DMG;
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][8] = true; } }
              pause();
            } else {
              DD = true;
              cout << "You deal " << P_DMG << " dmg\nYou've defeated the tile\n";
              for (int i = 0; i < tileLength; i++) {
                if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) {
                  tiles[i][2] = 1;
                  if (randNumber(1, 10) <= 1) {
                    tiles[i][6] = 3; //Loot tier
                    tiles[i][7] = 1; //Loot type
                  } else {
                    tiles[i][6] = 1;
                    tiles[i][7] = 2;
                  }
                }
              }
              pause();
            }
          }
        } else if (CTT = 4) {
          clear();
          if (input == "f") {
            float P_DMG = determineAttack(CWI, CAI);
            float E_DMG = CTAD * shieldAction(CSI);
            for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][3] -= P_DMG; } }
            currentTileStatus();
            if (CTHP[0] > 0) {
              cout << "You deal " << P_DMG << " dmg\nTile deals " << E_DMG << " dmg\n";
              HP[0] -= E_DMG;
              for (int i = 0; i < tileLength; i++) { if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) { tiles[i][8] = true; } }
              pause();
            } else {
              cout << "You deal " << P_DMG << " dmg\nYou've defeated the tile\n";
              for (int i = 0; i < tileLength; i++) {
                if (tiles[i][0] == PC[0] && tiles[i][1] == PC[1]) {
                  tiles[i][2] = 1;
                  int randType = randNumber(1, 3);
                  if (randType == 1) {
                    tiles[i][6] = 4; //Loot tier
                    tiles[i][7] = 1; //Loot type
                  } else if (randType == 2) {
                    tiles[i][6] = 2;
                    tiles[i][7] = 2;
                  } else {
                    tiles[i][6] = 3;
                    tiles[i][7] = 3;
                  }
                }
              }
            }
          } else if (input == "q") {
            inventory();
            clear();
            cout << "Tile deals " << CTAD << " dmg\n";
            HP[0] -= CTAD;
            pause();
          } else {
            clear();
            cout << "Invalid Input.\n";
            pause();
          }
        }
    } while(HP[0] > 0);
    do {
        clear();
        cout << "Oh, looks like you died...\n";
        pause();
    } while(true);
    //Returns 0 when main function is over to return that it is complete
    return 0;
}
