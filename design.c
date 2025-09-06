void
front ()
{
  int i;
  for (i = 0; i < 1; i++)
    {
      for (i = 1; i < 31; i++)
        {
          printf ("* ");
        }

      for (i = 0; i < 5; i++)
        {

          printf ("                                                         *");

          printf ("\n");
          printf ("*");
          if (i == 4)
            {
              printf ("              \tWELCOME TO HOTEL IN                     "
                      "  *\n");
              printf ("*              \tPROJECT MEMBERS                        "
                      "   *\n");
              printf (
                  "*                  \t1.Turab Haider                    *\n");
              printf (
                  "*                 \t2.Shaheer Khan                    *\n");
              printf (
                  "*                 \t3.Zain Ul Abideen                 *\n");
              printf ("*                 \tADDRESS:\"XYZ\"                     "
                      "*\n");
              printf ("*               CONTACT US:+9230-267826138,035455852    "
                      "  *\n" );
            }
        }
      for (i = 1; i < 31; i++)
        {
          printf ("* ");
        }
    }
}
