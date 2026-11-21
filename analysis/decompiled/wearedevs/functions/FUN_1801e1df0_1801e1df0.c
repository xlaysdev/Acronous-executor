/* FUN_1801e1df0 @ 1801e1df0 */

ulonglong FUN_1801e1df0(ulonglong *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  local_30 = *(undefined8 *)(param_3 + 4);
  uVar1 = *param_1;
  puVar3 = (ulonglong *)0x0;
  if (!SBORROW8(0,uVar1)) {
    puVar3 = param_1;
  }
  local_28 = param_1;
  uVar2 = FUN_1801dd260(param_2,&local_40,(char)param_1[4],puVar3,param_2);
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    uVar2 = uVar2 & 0xffffffff;
    thunk_FUN_1801d3330(local_28[1],uVar1,1);
  }
  return uVar2;
}


