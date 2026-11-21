/* FUN_1800ed720 @ 1800ed720 */

void FUN_1800ed720(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  switch(*(undefined1 *)(param_1 + 0x538)) {
  case 0:
    FUN_180043680(param_1);
    FUN_18000adf0(param_1 + 0x1a0);
    FUN_1800c8a30(param_1 + 0x90);
    return;
  default:
    goto switchD_1800ed759_caseD_1;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0x540);
    puVar2 = *(undefined8 **)(param_1 + 0x548);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0xb30) == '\x03') {
      FUN_1800ef720(param_1 + 0x680);
    }
    else if (*(char *)(param_1 + 0xb30) == '\0') {
      FUN_1800ee5e0(param_1 + 0x540);
    }
    if (*(longlong *)(param_1 + 0xb38) != 0) {
      FUN_180101100(param_1 + 0xb40);
    }
    FUN_180101150(param_1 + 0xb48);
    break;
  case 5:
    FUN_1800c6e10(param_1 + 0x540);
    if (*(char *)(param_1 + 0x410) != '\x02') {
      (**(code **)(*(longlong *)(param_1 + 0x3f0) + 0x20))
                (*(undefined8 *)(param_1 + 0x408),*(undefined8 *)(param_1 + 0x3f8),
                 *(undefined8 *)(param_1 + 0x400));
    }
    goto LAB_1800ed8c5;
  }
  *(undefined1 *)(param_1 + 0x539) = 0;
  FUN_1800c7ec0(param_1 + 0x440);
  *(undefined1 *)(param_1 + 0x53c) = 0;
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FUN_180101100(param_1 + 0x428);
  }
  FUN_180101150(param_1 + 0x430);
LAB_1800ed8c5:
  *(undefined2 *)(param_1 + 0x53d) = 0;
  FUN_1800c8a30(param_1 + 0x2e0);
  FUN_18000adf0(param_1 + 0x288);
  if ((*(char *)(param_1 + 0x53a) != '\0') &&
     (FUN_180042b50(param_1 + 0x1f8), *(char *)(param_1 + 0x53a) != '\0')) {
    plVar3 = *(longlong **)(param_1 + 0x268);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003d670(param_1 + 0x268);
    }
  }
  *(undefined1 *)(param_1 + 0x53b) = 0;
  if ((*(char *)(param_1 + 0x53a) != '\0') &&
     (plVar3 = *(longlong **)(param_1 + 0x270), plVar3 != (longlong *)0x0)) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003dca0(param_1 + 0x270);
    }
  }
  *(undefined2 *)(param_1 + 0x53a) = 0;
  *(undefined1 *)(param_1 + 0x53f) = 0;
switchD_1800ed759_caseD_1:
  return;
}


