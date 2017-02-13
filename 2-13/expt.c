double expt( double base, int power)
{

  double answer = base;

  if(power==0)
    {
      return 1;
    }
  else if(power <0)
    {
      power = -power;
        for(int x = 1; x<power; x++)
          {
            answer = answer*base;
          }
      return 1/answer;
    }
  else
    {

      for(int x = 1; x<power; x++)
        {
          answer = answer*base;
        }
      return answer;
    }


}



int main(void)
{
  
  double a = expt(2, 3);
  double b = expt(-3, 3);
  double c = expt(3, -4);
  double d = expt(0, 5);
  double e = expt(.25, -4);

  printf( "%lf\n", a );
  printf( "%lf\n", b );
  printf( "%lf\n", c );
  printf( "%lf\n", d );
  printf( "%lf\n", e );

  return 0;
}
