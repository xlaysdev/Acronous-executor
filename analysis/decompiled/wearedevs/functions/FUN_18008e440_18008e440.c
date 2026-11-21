/* FUN_18008e440 @ 18008e440 */

undefined8 FUN_18008e440(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined2 local_148;
  undefined8 local_146;
  
  uVar4 = *(undefined8 *)(param_1 + 9);
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = 0;
  if ((bVar1 & 1) == 0) {
    return 0;
  }
  if ((*(int *)(param_3 + 0x128) == 4) &&
     (*(ulonglong *)(param_3 + 0x1a0) <=
      (ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)))) {
LAB_18008e4d5:
    local_148 = 0x105;
    local_146 = uVar4;
    cVar2 = FUN_18005b0b0(param_3 + 0x48,&local_148);
    uVar4 = 0;
    if (cVar2 != '\r') {
      local_148 = CONCAT11(local_148._1_1_,cVar2);
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("invalid pong frame",0x12,&local_148,&DAT_18020e6a0,
                    &PTR_s_C__Users_burne__cargo_registry_s_18020e5e8);
    }
  }
  else {
    uVar3 = FUN_18005ccd0(param_3 + 0x48);
    if ((uVar3 & 1) == 0) {
      if (param_2 != 0) {
        return 0;
      }
      if ((*(int *)(param_3 + 0x128) == 4) &&
         (*(ulonglong *)(param_3 + 0x1a0) <=
          (ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178))))
      goto LAB_18008e4d5;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    uVar4 = 1;
  }
  return uVar4;
}


