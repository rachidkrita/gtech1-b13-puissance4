#define NBL 6
#define NBC 7
    
char tab[NBL][NBC];

void init(void) {
  for(int l=0; l<NBL; l++) {
    for(int c=0; c<NBC; c++) {
      tab[l][c] = '.';
    }
  }
}
