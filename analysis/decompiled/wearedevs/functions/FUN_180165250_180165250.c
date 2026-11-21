/* FUN_180165250 @ 180165250 */

undefined8 FUN_180165250(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong local_8;
  
  local_8 = *(longlong *)(*param_2 + 0x18);
  if (local_8 == 0) {
    return 0;
  }
  lVar1 = *param_1;
  if (local_8 == *(longlong *)(lVar1 + 0x198)) {
    uVar3 = FUN_180181d30(lVar1 + 0x170);
    return uVar3;
  }
  FUN_1801fb056(0,&local_8,lVar1 + 0x198,0);
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}


