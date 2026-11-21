/* FUN_1801ada60 @ 1801ada60 */

int FUN_1801ada60(char *param_1,longlong param_2)

{
  if (param_2 == 3) {
    if (((byte)(param_1[2] - 0x30U) < 10 && (byte)(param_1[1] - 0x30U) < 10) &&
        0xf6 < (byte)(*param_1 - 0x3aU)) {
      return (uint)(byte)((param_1[1] - 0x30U) * '\n') + (uint)(byte)(*param_1 - 0x30) * 100 +
             (uint)(byte)(param_1[2] - 0x30U);
    }
  }
  return 0;
}


