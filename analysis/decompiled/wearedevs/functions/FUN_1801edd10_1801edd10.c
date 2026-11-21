/* FUN_1801edd10 @ 1801edd10 */

void FUN_1801edd10(uint *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  uint local_c;
  
  local_c = *param_1;
  if ((*(byte *)((longlong)param_2 + 0x13) & 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001801edd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x20))(*param_2,local_c,*(code **)(param_2[1] + 0x20));
    return;
  }
  uVar2 = (undefined1)local_c;
  if (local_c < 0x80) {
    local_c = local_c & 0xff;
    uVar4 = 1;
  }
  else {
    uVar3 = (undefined1)(local_c >> 6);
    if (local_c < 0x800) {
      local_c = (uint)(CONCAT11(uVar2,uVar3) & 0x3fff | 0x80c0);
      uVar4 = 2;
    }
    else {
      uVar1 = (undefined1)(local_c >> 0xc);
      if (local_c < 0x10000) {
        local_c = (uint)(CONCAT12(uVar2,CONCAT11(uVar3,uVar1)) & 0x3f3fff | 0x8080e0);
        uVar4 = 3;
      }
      else {
        local_c = CONCAT13(uVar2,CONCAT12(uVar3,CONCAT11(uVar1,(char)(local_c >> 0x12)))) &
                  0x3f3f3fff | 0x808080f0;
        uVar4 = 4;
      }
    }
  }
  FUN_1801f0810(param_2,&local_c,uVar4);
  return;
}


