/* FUN_18000cec0 @ 18000cec0 */

void FUN_18000cec0(int *param_1)

{
  longlong *plVar1;
  
  switch((char)param_1[0x44]) {
  case '\x03':
    if (*(char *)((longlong)param_1 + 0x151) != '\x03') {
      return;
    }
    FUN_18000b8f0(*(undefined8 *)(param_1 + 0x4a),*(undefined8 *)(param_1 + 0x4c));
    plVar1 = *(longlong **)(param_1 + 0x52);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003e300(param_1 + 0x52);
    }
    *(undefined1 *)(param_1 + 0x54) = 0;
    return;
  case '\x04':
    FUN_18000cc70(param_1 + 0x46);
    break;
  case '\x05':
    if (*(char *)((longlong)param_1 + 0x151) == '\x03') {
      FUN_18000b8f0(*(undefined8 *)(param_1 + 0x4a),*(undefined8 *)(param_1 + 0x4c));
      plVar1 = *(longlong **)(param_1 + 0x52);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003e300(param_1 + 0x52);
      }
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
    break;
  case '\x06':
    FUN_18000cc70(param_1 + 0x46);
    if (param_1[0x22] == 3) {
      FUN_18000afd0(*(undefined8 *)(param_1 + 0x24));
    }
    break;
  default:
    goto switchD_18000cef6_default;
  }
  if (*param_1 == 3) {
    FUN_18000afd0(*(undefined8 *)(param_1 + 2));
    return;
  }
switchD_18000cef6_default:
  return;
}


