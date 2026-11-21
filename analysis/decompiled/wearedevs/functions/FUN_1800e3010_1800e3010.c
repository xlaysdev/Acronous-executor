/* FUN_1800e3010 @ 1800e3010 */

void FUN_1800e3010(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x51);
  if (cVar1 == '\0') {
    if ((char)param_1[9] == '\0') {
      plVar2 = (longlong *)param_1[7];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003dca0();
      }
    }
    if (*param_1 != 0) {
      FUN_180101100(param_1 + 1);
    }
    FUN_180101150(param_1 + 2);
    goto LAB_1800e317e;
  }
  if (cVar1 == '\x03') {
    if ((char)param_1[0xd] == '\0') {
      plVar2 = (longlong *)param_1[0xb];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003dca0();
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if ((char)param_1[0x45] == '\x03') {
      cVar1 = (char)param_1[0x3d];
      if (cVar1 == '\0') {
        FUN_1800df340(param_1 + 0x12);
      }
      else {
        if (cVar1 == '\x04') {
          FUN_1800e0c40(param_1[0x3e]);
          if ((int)param_1[0x19] != 3) {
            *(undefined1 *)((longlong)param_1 + 0x1e9) = 0;
          }
        }
        else {
          if (cVar1 != '\x03') goto LAB_1800e314e;
          if ((int)param_1[0x3e] != 2) {
            FUN_1800df340(param_1 + 0x3e);
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x1e9) = 0;
      }
    }
    else if ((char)param_1[0x45] == '\0') {
      FUN_1800df340(param_1 + 0xb);
    }
LAB_1800e314e:
    *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x53) = 0;
  if (*param_1 != 0) {
    FUN_180101100(param_1 + 1);
  }
  FUN_180101150(param_1 + 2);
LAB_1800e317e:
  if (param_1[4] == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[5],param_1[4],1);
  return;
}


