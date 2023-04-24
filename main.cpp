#include <iostream>

using namespace std;

void normal(int zombieCount){
  if(zombieCount > 0){
    cout << "Normal Zombies: " << zombieCount <<endl;
  }
}

void blood(int zombieCount){
  int bloodCount = 0;
  
  while(zombieCount >= 3){
    bloodCount++;
    zombieCount = zombieCount - 3;
  }
  
  if(bloodCount > 0){
    cout << "Blood Zombies: " << bloodCount << endl;
  }
  
  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  normal(zombieCount);
}

void miner(int zombieCount){
  int minerCount = 0;
  
  while(zombieCount >= 9){
    minerCount++;
    zombieCount = zombieCount - 9;
  }
  
  if(minerCount > 0){
    cout << "Miner Zombies: " << minerCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  blood(zombieCount);
}

void big(int zombieCount){
  int bigCount = 0;
  
  while(zombieCount >= 27){
    bigCount++;
    zombieCount = zombieCount - 27;
  }
  
  if(bigCount > 0){
    cout << "Big Zombies: " << bigCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  miner(zombieCount);
}

void guard(int zombieCount){
  int guardCount = 0;
  
  while(zombieCount >= 81){
    guardCount++;
    zombieCount = zombieCount - 81;
  }
  
  if(guardCount > 0){
    cout << "Guard Zombies: " << guardCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  big(zombieCount);
}

void pirate(int zombieCount){
  int pirateCount = 0;
  
  while(zombieCount >= 243){
    pirateCount++;
    zombieCount = zombieCount - 243;
  }
  
  if(pirateCount > 0){
    cout << "Pirate Zombies: " << pirateCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  guard(zombieCount);
}

void soilder(int zombieCount){
  int soilderCount = 0;
  
  while(zombieCount >= 486){
    soilderCount++;
    zombieCount = zombieCount - 486;
  }
  
  if(soilderCount > 0){
    cout << "Soilder Zombies: " << soilderCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  pirate(zombieCount);
}

void poison(int zombieCount){
  int poisonCount = 0;
  
  while(zombieCount >= 972){
    poisonCount++;
    zombieCount = zombieCount - 972;
  }
  
  if(poisonCount > 0){
    cout << "Poison Zombies: " << poisonCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  soilder(zombieCount);
}

void heavy(int zombieCount){
  int heavyCount = 0;
  
  while(zombieCount >= 1944){
   heavyCount++;
    zombieCount = zombieCount - 1944;
  }
  
  if(heavyCount > 0){
    cout << "Heavy Zombies: " << heavyCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  poison(zombieCount);
}

void demon(int zombieCount){
  int demonCount = 0;
  
  while(zombieCount >= 3888){
    demonCount++;
    zombieCount = zombieCount - 3888;
  }
  
  if(demonCount > 0){
    cout << "Demon Zombies: " << demonCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  heavy(zombieCount);
}

void angelic(int zombieCount){
  int angelicCount = 0;
  
  while(zombieCount >= 11664){
    angelicCount++;
    zombieCount = zombieCount - 11664;
  }
  
  if(angelicCount > 0){
    cout << "Angelic Zombies: " << angelicCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  demon(zombieCount);
}

void voidzom(int zombieCount){
  int voidzomCount = 0;
  
  while(zombieCount >= 34992){
    voidzomCount++;
    zombieCount = zombieCount - 34992;
  }
  
  if(voidzomCount > 0){
    cout << "Void Zombies: " << voidzomCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  angelic(zombieCount);
}

void frozen(int zombieCount){
  int frozenCount = 0;
  
  while(zombieCount >= 139968){
    frozenCount++;
    zombieCount = zombieCount - 139968;
  }
  
  if(frozenCount > 0){
    cout << "Frozen Zombies: " << frozenCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  voidzom(zombieCount);
}

void flame(int zombieCount){
  int flameCount = 0;
  
  while(zombieCount >= 419904){
    flameCount++;
    zombieCount = zombieCount - 419904;
  }
  
  if(flameCount > 0){
    cout << "Flame Zombies: " << flameCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  frozen(zombieCount);
}

void spring(int zombieCount){
  int springCount = 0;
  
  while(zombieCount >= 839808){
    springCount++;
    zombieCount = zombieCount - 839808;
  }
  
  if(springCount > 0){
    cout << "Spring Zombies: " << springCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  flame(zombieCount);
}

void commander(int zombieCount){
  int commanderCount = 0;
  
  while(zombieCount >= 1679616){
    commanderCount++;
    zombieCount = zombieCount - 1679616;
  }
  
  if(commanderCount > 0){
    cout << "Commander Zombies: " << commanderCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  spring(zombieCount);
}

void mecha(int zombieCount){
  int mechaCount = 0;
  
  while(zombieCount >= 3359232){
    mechaCount++;
    zombieCount = zombieCount - 3359232;
  }
  
  if(mechaCount > 0){
    cout << "Mecha Zombies: " << mechaCount << endl;
  }

  if(zombieCount == 0){
    exit (EXIT_FAILURE);
  }
  
  commander(zombieCount);
}

int main() {
  int zombieCount;
  cout << "How much zombies do you have? ";
  cin >> zombieCount;

  cout << "You have:" << endl;
  
  mecha(zombieCount);

  return 0;
}