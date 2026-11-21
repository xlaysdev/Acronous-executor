/* Unwind@1800c3cf0 @ 1800c3cf0 */

void Unwind_1800c3cf0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = *(int **)(param_2 + 0x100);
  bVar1 = *(byte *)(param_2 + 0x10c);
  if (*(char *)(param_2 + 0x10b) != '\0') {
    FUN_18000b470(*(undefined8 *)(param_2 + 0x68));
  }
  lVar3 = *(longlong *)(param_2 + 0xf8);
  if (*piVar2 == 4) {
    if ((bVar1 & 1) != 0) {
      (**(code **)(*(longlong *)(lVar3 + 0x48) + 0x20))
                (*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x50),
                 *(undefined8 *)(lVar3 + 0x58));
    }
  }
  else {
    FUN_1800c8eb0(piVar2);
  }
  FUN_180042b50(lVar3);
  FUN_18000adf0(lVar3 + 0xa0);
  return;
}


