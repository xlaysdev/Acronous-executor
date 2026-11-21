/* FUN_1800465c0 @ 1800465c0 */

void FUN_1800465c0(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_33;
  undefined1 local_32;
  byte local_31;
  longlong local_30;
  
  if (*param_1 != '\0') {
    if (*param_1 == '\x01') {
      if (param_1[1] == '\0') {
        local_32 = 1;
        puVar3 = &local_32;
      }
      else {
        local_33 = 2;
        puVar3 = &local_33;
      }
      FUN_1800271e0(param_2,puVar3,1);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 8);
      lVar2 = *(longlong *)(lVar1 + 0x10);
      local_30 = lVar2;
      FUN_1800271e0(param_2,&local_30,8);
      if (lVar2 != 0) {
        lVar1 = *(longlong *)(lVar1 + 8);
        lVar4 = 0;
        do {
          local_31 = *(byte *)(lVar1 + lVar4);
          local_31 = ((byte)(local_31 + 0xbf) < 0x1a) << 5 | local_31;
          FUN_1800271e0(param_2,&local_31,1);
          lVar4 = lVar4 + 1;
        } while (lVar2 != lVar4);
      }
    }
  }
  return;
}


