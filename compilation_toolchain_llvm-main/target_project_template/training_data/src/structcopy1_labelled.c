------- LABEL 1
struct innerStruct{
int m;
int* n;
};
struct myStruct{
float a;
struct innerStruct b;
};

int main(){
  struct myStruct x;
  x.b.n = malloc(10);
  struct myStruct y;
  memcpy(&y,&x,sizeof(struct myStruct));
------- LABEL 2
}
