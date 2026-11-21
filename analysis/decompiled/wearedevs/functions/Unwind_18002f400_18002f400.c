/* Unwind@18002f400 @ 18002f400 */

void Unwind_18002f400(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  for (lVar4 = *(longlong *)(param_2 + 0x38); lVar4 != lVar1; lVar4 = lVar4 + 1) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + lVar4 * 8);
    cVar3 = FUN_180177f20(uVar2);
    if (cVar3 != '\0') {
      FUN_1801776b0(uVar2);
    }
  }
  return;
}


