/* FUN_180178a30 @ 180178a30 */

void FUN_180178a30(char *param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *local_58;
  longlong *local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pcVar1 = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 0x68) = param_3;
  iVar4 = *(int *)(param_1 + 0x10);
  cVar3 = *param_1;
  plVar5 = *(longlong **)(param_1 + 8);
  LOCK();
  lVar2 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (iVar4 == 2) {
    local_50 = plVar5;
    local_48 = param_1;
    if (cVar3 == '\0') {
      if (-1 < lVar2) {
        local_40 = 0;
        goto LAB_180178abe;
      }
    }
    else {
      local_40 = 1;
      if (-1 < lVar2) {
LAB_180178abe:
        FUN_180178660(pcVar1);
        *(undefined8 *)(local_48 + 0x10) = local_40;
        *(longlong **)(local_48 + 0x18) = local_50;
        local_48[0x20] = '\0';
        local_48[0x21] = '\0';
        local_48[0x22] = '\0';
        local_48[0x23] = '\0';
        local_48[0x24] = '\0';
        local_48[0x25] = '\0';
        local_48[0x26] = '\0';
        local_48[0x27] = '\0';
        local_48[0x28] = '\0';
        local_48[0x29] = '\0';
        local_48[0x2a] = '\0';
        local_48[0x2b] = '\0';
        local_48[0x2c] = '\0';
        local_48[0x2d] = '\0';
        local_48[0x2e] = '\0';
        local_48[0x2f] = '\0';
        local_48[0x30] = '\0';
        local_48[0x31] = '\0';
        local_48[0x32] = '\0';
        local_48[0x33] = '\0';
        local_48[0x34] = '\0';
        local_48[0x35] = '\0';
        local_48[0x36] = '\0';
        local_48[0x37] = '\0';
        local_48[0x38] = -1;
        local_48[0x39] = -1;
        local_48[0x3a] = -1;
        local_48[0x3b] = -1;
        local_48[0x3c] = -1;
        local_48[0x3d] = -1;
        local_48[0x3e] = -1;
        local_48[0x3f] = -1;
        local_48[0x40] = '\0';
        local_48[0x41] = '\0';
        local_48[0x42] = '\0';
        local_48[0x43] = '\0';
        local_48[0x44] = '\0';
        local_48[0x45] = '\0';
        local_48[0x46] = '\0';
        local_48[0x47] = '\0';
        local_48[0x50] = '\0';
        local_48[0x51] = '\0';
        local_48[0x52] = '\0';
        local_48[0x53] = '\0';
        local_48[0x54] = '\0';
        local_48[0x55] = '\0';
        local_48[0x56] = '\0';
        local_48[0x57] = '\0';
        local_48[0x58] = '\0';
        FUN_1801670c0(pcVar1,param_2,param_3);
        return;
      }
    }
  }
  else if (-1 < lVar2) {
    local_58 = plVar5;
    FUN_1801671c0(pcVar1,param_2,param_3);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (cVar3 == '\0') {
      if (*plVar5 == 0) {
        FUN_1801635e0(&local_58);
      }
    }
    else if (*plVar5 == 0) {
      FUN_180162f80();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


