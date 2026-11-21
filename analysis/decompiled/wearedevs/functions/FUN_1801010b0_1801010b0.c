/* FUN_1801010b0 @ 1801010b0 */

char * FUN_1801010b0(byte param_1,char param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = 5;
  if (param_2 != '\x05') {
    bVar1 = param_2 + 1;
  }
  uVar2 = (ulonglong)param_1;
  if (bVar1 < param_1) {
    uVar2 = 0;
  }
  if (param_1 == 5) {
    uVar2 = 0;
  }
  return "" + uVar2;
}


