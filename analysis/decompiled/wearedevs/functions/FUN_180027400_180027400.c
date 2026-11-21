/* FUN_180027400 @ 180027400 */

void FUN_180027400(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0xf;
  if ((longlong)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x8000000000000000;
  }
  switch(uVar3) {
  case 0:
  case 2:
  case 4:
    puVar2 = (undefined1 *)param_1[1];
    uVar1 = param_1[2];
    *puVar2 = 0;
    if (uVar1 != 0) {
      thunk_FUN_1801d3330(puVar2,uVar1,1);
      return;
    }
    break;
  case 6:
  case 8:
  case 10:
  case 0xc:
    FUN_18000b160(param_1 + 1);
    return;
  case 0xf:
    if (uVar1 != 0) {
      thunk_FUN_1801d3330(param_1[1],uVar1,1);
      return;
    }
  }
  return;
}


