/* FUN_1801ac790 @ 1801ac790 */

char * FUN_1801ac790(char *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 local_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  
  lVar2 = *(longlong *)(param_2 + 0x40);
  cVar1 = *param_2;
  cVar5 = '\x03';
  if (cVar1 == '\0' && lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    local_68 = *(undefined8 *)(param_2 + 0x48);
    uStack_60 = *(undefined8 *)(param_2 + 0x50);
    local_78 = *(undefined8 *)(param_2 + 0x38);
    uStack_70 = *(undefined8 *)(param_2 + 0x40);
    if (cVar1 != '\0') {
      uStack_30 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 8) >> 8);
      local_38 = (undefined7)*(undefined8 *)(param_2 + 1);
      uStack_31 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x38);
      cVar5 = cVar1;
    }
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined8 *)(param_2 + 0x28);
    local_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_50 = *(undefined8 *)(param_2 + 0x20);
  }
  *param_1 = cVar5;
  *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_31,local_38);
  *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_30,uStack_31);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = local_58;
  *(undefined8 *)(param_1 + 0x20) = uStack_50;
  *(undefined8 *)(param_1 + 0x28) = local_48;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0x3c) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_70;
  *(undefined4 *)(param_1 + 0x44) = uStack_70._4_4_;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x4c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x54) = uStack_60._4_4_;
  if (lVar3 == 0) {
    (**(code **)(*(longlong *)(param_2 + 0x10) + 0x20))
              (*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),0);
  }
  if (cVar1 == '\0' && lVar2 == 0) {
    (**(code **)(*(longlong *)(param_2 + 0x30) + 0x20))
              (*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x38),0);
  }
  return param_1;
}


