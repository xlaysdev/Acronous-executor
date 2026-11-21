/* FUN_180102d20 @ 180102d20 */

void FUN_180102d20(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_180177db0();
  if (cVar1 != '\0') {
    FUN_18010f980(param_1 + 0x20);
    FUN_1801102e0(param_1);
    return;
  }
  cVar1 = FUN_180177f20(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_180102b60(param_1);
  return;
}


