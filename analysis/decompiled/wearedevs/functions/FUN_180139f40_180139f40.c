/* FUN_180139f40 @ 180139f40 */

void FUN_180139f40(undefined1 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  cVar1 = *(char *)(param_2 + 0x118);
  if (cVar1 == '\x03') {
    *param_1 = 3;
  }
  else {
    if (cVar1 == '\0') {
      uStack_4f = *(undefined1 *)(param_2 + 0x119);
      uStack_4c = (undefined4)*(undefined8 *)(param_2 + 0x11c);
      local_48 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x11c) >> 0x20);
      local_50 = 0;
    }
    else if (cVar1 == '\x01') {
      (*(code *)**(undefined8 **)(param_2 + 0x120))
                (&local_48,param_2 + 0x138,*(undefined8 *)(param_2 + 0x128),
                 *(undefined8 *)(param_2 + 0x130));
      uStack_4c = *(undefined4 *)(param_2 + 0x11c);
      local_50 = 1;
      uStack_4f = *(undefined1 *)(param_2 + 0x119);
    }
    else {
      uVar2 = *(undefined1 *)(param_2 + 0x119);
      if (SBORROW8(0,*(longlong *)(param_2 + 0x120))) {
        uStack_44 = 0x80000000;
        local_48 = 0;
      }
      else {
        FUN_1801ed500(&local_50,param_2 + 0x120);
        local_28 = CONCAT44(uStack_44,local_48);
        uStack_20 = uStack_40;
        local_48 = CONCAT22(uStack_4e,CONCAT11(uStack_4f,local_50));
        uStack_44 = uStack_4c;
      }
      uStack_40 = local_28;
      uStack_38 = uStack_20;
      local_50 = 2;
      uStack_4f = uVar2;
    }
    *(undefined8 *)(param_1 + 0x20) = local_30;
    *(undefined8 *)(param_1 + 0x10) = uStack_40;
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *param_1 = local_50;
    param_1[1] = uStack_4f;
    *(undefined2 *)(param_1 + 2) = uStack_4e;
    *(undefined4 *)(param_1 + 4) = uStack_4c;
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_44,local_48);
  }
  return;
}


