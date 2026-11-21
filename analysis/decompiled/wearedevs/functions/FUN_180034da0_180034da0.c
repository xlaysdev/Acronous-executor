/* FUN_180034da0 @ 180034da0 */

void FUN_180034da0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x10) != '\x03') {
    if (*(char *)(param_1 + 0x10) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x58);
    if (cVar1 == '\x04') {
      FUN_180032310(param_1 + 0x60);
    }
    else {
      if (cVar1 != '\x03') {
        if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x20),1);
        }
        goto LAB_180034fe2;
      }
      if (*(char *)(param_1 + 0xa0) == '\x03') {
        FUN_18000b8f0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
        plVar3 = *(longlong **)(param_1 + 0x78);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18003e300(param_1 + 0x78);
        }
        *(undefined1 *)(param_1 + 0xa1) = 0;
      }
      else if ((*(char *)(param_1 + 0xa0) == '\0') && (*(longlong *)(param_1 + 0x60) != 0)) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x68),*(longlong *)(param_1 + 0x60),1);
      }
    }
    *(undefined2 *)(param_1 + 0x59) = 0;
LAB_180034fe2:
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x2b0),*(longlong *)(param_1 + 0x2a8),1);
    }
    FUN_18000b2a0(param_1 + 0x288);
    if (*(longlong *)(param_1 + 0x268) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x270),*(longlong *)(param_1 + 0x268),1);
    }
    FUN_18000b2a0(param_1 + 0x248);
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x128)) {
  case 3:
    if (*(char *)(param_1 + 0x169) != '\x03') {
      return;
    }
    FUN_18000b8f0(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
    plVar3 = *(longlong **)(param_1 + 0x160);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003e300(param_1 + 0x160);
    }
    *(undefined1 *)(param_1 + 0x168) = 0;
    return;
  case 4:
    if (*(char *)(param_1 + 0x4e8) != '\x03') {
      if (*(char *)(param_1 + 0x4e8) == '\0') {
        FUN_180018190(param_1 + 0x130);
      }
      break;
    }
    if (*(char *)(param_1 + 0x4e0) != '\x03') {
      if (*(char *)(param_1 + 0x4e0) == '\0') {
        FUN_180018190(param_1 + 0x1b8);
      }
      break;
    }
    FUN_180032310(param_1 + 0x338);
    FUN_180031970(param_1 + 0x2d8);
    *(undefined1 *)(param_1 + 0x4e1) = 0;
    iVar2 = *(int *)(param_1 + 0x18);
    goto joined_r0x00018003510f;
  case 5:
    if (*(char *)(param_1 + 0x169) == '\x03') {
      FUN_18000b8f0(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
      plVar3 = *(longlong **)(param_1 + 0x160);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003e300(param_1 + 0x160);
      }
      *(undefined1 *)(param_1 + 0x168) = 0;
      if (*(int *)(param_1 + 0x18) != 3) {
        return;
      }
      goto LAB_1800350d5;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x4e8) == '\x03') {
      if (*(char *)(param_1 + 0x4e0) == '\x03') {
        FUN_180032310(param_1 + 0x338);
        FUN_180031970(param_1 + 0x2d8);
        *(undefined1 *)(param_1 + 0x4e1) = 0;
      }
      else if (*(char *)(param_1 + 0x4e0) == '\0') {
        FUN_180018190(param_1 + 0x1b8);
      }
    }
    else if (*(char *)(param_1 + 0x4e8) == '\0') {
      FUN_180018190(param_1 + 0x130);
    }
    if (*(int *)(param_1 + 0xa0) == 3) {
      FUN_18000afd0(*(undefined8 *)(param_1 + 0xa8));
    }
    break;
  default:
    goto switchD_180034e2c_default;
  }
  iVar2 = *(int *)(param_1 + 0x18);
joined_r0x00018003510f:
  if (iVar2 == 3) {
LAB_1800350d5:
    FUN_18000afd0(*(undefined8 *)(param_1 + 0x20));
    return;
  }
switchD_180034e2c_default:
  return;
}


