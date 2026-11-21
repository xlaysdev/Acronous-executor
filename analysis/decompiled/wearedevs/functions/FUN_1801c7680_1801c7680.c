/* FUN_1801c7680 @ 1801c7680 */

void FUN_1801c7680(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[0x10];
  puVar2 = (ulonglong *)param_1[1];
  for (uVar4 = *param_1 & 0xfffffffffffffffe; uVar4 != (uVar1 & 0xfffffffffffffffe);
      uVar4 = uVar4 + 2) {
    puVar3 = puVar2;
    if ((~(uint)uVar4 & 0x7e) == 0) {
      puVar3 = (ulonglong *)*puVar2;
      thunk_FUN_1801d3330(puVar2,0x5f0,8);
    }
    puVar2 = puVar3;
  }
  thunk_FUN_1801d3330(puVar2,0x5f0,8);
  return;
}


