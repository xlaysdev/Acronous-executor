/* FUN_18011b350 @ 18011b350 */

undefined8 FUN_18011b350(longlong *param_1,uint param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong _Size;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 local_1c;
  
  puVar3 = (undefined1 *)((longlong)register0x00000020 + -0x18);
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    puVar3 = (undefined1 *)((longlong)&local_1c + 1);
    local_1c = param_2 & 0xff;
  }
  else {
    uVar4 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      puVar3 = (undefined1 *)((longlong)&local_1c + 2);
      local_1c = (uint)(CONCAT11(uVar1,uVar4) & 0x3fff | 0x80c0);
    }
    else {
      uVar5 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        puVar3 = (undefined1 *)((longlong)&local_1c + 3);
        local_1c = (uint)(CONCAT12(uVar1,CONCAT11(uVar4,uVar5)) & 0x3f3fff | 0x8080e0);
      }
      else {
        local_1c = CONCAT13(uVar1,CONCAT12(uVar4,CONCAT11(uVar5,(char)(param_2 >> 0x12)))) &
                   0x3f3f3fff | 0x808080f0;
      }
    }
  }
  param_1 = (longlong *)*param_1;
  _Size = (longlong)puVar3 - (longlong)&local_1c;
  lVar2 = param_1[2];
  if ((ulonglong)(*param_1 - lVar2) < _Size) {
    FUN_1801f6a80(param_1,lVar2,_Size,1,1);
    lVar2 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar2),&local_1c,_Size);
  param_1[2] = lVar2 + _Size;
  return 0;
}


