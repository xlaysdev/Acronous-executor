/* FUN_1800564c0 @ 1800564c0 */

void FUN_1800564c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x138) == 0) &&
      (0x8000000000000001 < *(ulonglong *)(param_1 + 0x1a0))) && (*(char *)(param_1 + 0xb1) == '\0')
     ) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
      uVar1 = FUN_18006a180(param_1);
      if (uVar1 == 2) {
        return;
      }
      if ((uVar1 & 1) == 0) {
        if (param_2 == 0) {
          if (*(char *)(param_1 + 0x1fd) == '\0') {
            FUN_1801146e0(param_1 + 0xb8);
            return;
          }
          FUN_180114360();
          return;
        }
      }
      else {
        FUN_1801146e0(param_1 + 0xb8);
        uVar2 = FUN_180115d60(param_2);
        FUN_18003c2f0(*(undefined8 *)(param_1 + 0x1d8));
        *(undefined8 *)(param_1 + 0x1d8) = uVar2;
      }
    }
    *(undefined1 *)(param_1 + 0x1fb) = 1;
  }
  return;
}


