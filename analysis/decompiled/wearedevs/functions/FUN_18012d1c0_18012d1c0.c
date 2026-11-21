/* FUN_18012d1c0 @ 18012d1c0 */

void FUN_18012d1c0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined2 *param_5,longlong param_6,longlong param_7)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_64;
  byte local_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined1 local_58;
  undefined7 uStack_57;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  
  local_48 = param_6;
  lStack_40 = param_7;
  local_78 = (longlong *)((longlong)param_3 + param_4);
  uVar7 = 1;
  if (param_4 != 0) {
    do {
      while (cVar1 = (char)*param_3, cVar1 != '\n') {
        if (cVar1 != '\r') {
          if ((ulonglong)((longlong)local_78 - (longlong)param_3) < 8) {
            uVar7 = 1;
            if ((local_78 <= param_3) ||
               ((cVar1 == 'H' &&
                ((local_78 <= (longlong *)((longlong)param_3 + 1U) ||
                 ((*(char *)((longlong)param_3 + 1) == 'T' &&
                  ((local_78 <= (longlong *)((longlong)param_3 + 2U) ||
                   ((*(char *)((longlong)param_3 + 2) == 'T' &&
                    ((local_78 <= (longlong *)((longlong)param_3 + 3U) ||
                     ((*(char *)((longlong)param_3 + 3) == 'P' &&
                      ((local_78 <= (longlong *)((longlong)param_3 + 4U) ||
                       ((*(char *)((longlong)param_3 + 4) == '/' &&
                        ((local_78 <= (longlong *)((longlong)param_3 + 5U) ||
                         ((*(char *)((longlong)param_3 + 5) == '1' &&
                          ((local_78 <= (longlong *)((longlong)param_3 + 6) ||
                           (*(char *)((longlong)param_3 + 6) == '.'))))))))))))))))))))))))))
            goto LAB_18012d304;
LAB_18012d2fb:
            *(undefined1 *)(param_1 + 1) = 6;
            uVar7 = 2;
LAB_18012d304:
            *param_1 = uVar7;
            return;
          }
          if (*param_3 == 0x302e312f50545448) {
            uVar6 = 0;
          }
          else {
            if (*param_3 != 0x312e312f50545448) goto LAB_18012d2fb;
            uVar6 = 1;
          }
          *(undefined1 *)(param_2 + 4) = 1;
          *(undefined1 *)((longlong)param_2 + 0x21) = uVar6;
          uVar7 = 1;
          if (param_3 + 1 < local_78) {
            local_70 = (longlong *)((longlong)param_3 + 9);
            if ((char)param_3[1] == ' ') {
              cVar1 = *(char *)((longlong)param_5 + 3);
              if (cVar1 == '\x01') {
                while( true ) {
                  if (local_78 <= local_70) {
                    *param_1 = 1;
                    return;
                  }
                  if ((char)*local_70 != ' ') break;
                  local_70 = (longlong *)((longlong)local_70 + 1);
                }
              }
              local_80 = local_70;
              uVar5 = FUN_18012c2c0(&local_80);
              if ((short)uVar5 == 2) {
                *(char *)(param_1 + 1) = (char)(uVar5 >> 0x10);
                uVar7 = 2;
              }
              else {
                uVar7 = 1;
                if ((uVar5 & 1) == 0) {
                  *(undefined2 *)((longlong)param_2 + 0x22) = 1;
                  *(short *)((longlong)param_2 + 0x24) = (short)(uVar5 >> 0x10);
                  if (local_78 <= local_70) goto LAB_18012d420;
                  cVar2 = (char)*local_70;
                  local_80 = (longlong *)((longlong)local_70 + 1);
                  if (cVar2 == '\n') {
                    *param_2 = 1;
                    param_2[1] = 0;
                    local_70 = local_80;
                  }
                  else if (cVar2 == '\r') {
                    if (local_78 <= local_80) {
                      *param_1 = 1;
                      return;
                    }
                    local_80 = (longlong *)((longlong)local_70 + 2);
                    if (*(char *)((longlong)local_70 + 1) != '\n') {
                      *(undefined1 *)(param_1 + 1) = 3;
                      *param_1 = 2;
                      return;
                    }
                    *param_2 = 1;
                    param_2[1] = 0;
                    local_70 = local_80;
                  }
                  else {
                    if (cVar2 != ' ') {
                      *(undefined1 *)(param_1 + 1) = 3;
                      *param_1 = 2;
                      return;
                    }
                    local_70 = local_80;
                    if (cVar1 != '\0') {
                      if (local_78 <= local_80) {
LAB_18012d420:
                        *param_1 = 1;
                        return;
                      }
                      while ((char)*local_80 == ' ') {
                        local_80 = (longlong *)((longlong)local_80 + 1);
                        if (local_80 == local_78) goto LAB_18012d420;
                      }
                      local_70 = local_80;
                    }
                    local_80 = local_70;
                    FUN_18012c3c0(&local_60,&local_80);
                    if (local_60 != 0) {
                      *(undefined1 *)(param_1 + 1) = uStack_5f;
                      *param_1 = 2;
                      return;
                    }
                    if (CONCAT71(uStack_57,local_58) == 0) {
                      *param_1 = 1;
                      return;
                    }
                    *param_2 = CONCAT71(uStack_57,local_58);
                    param_2[1] = local_50;
                  }
                  plVar4 = local_70;
                  plVar3 = local_78;
                  local_64 = CONCAT22(param_5[2],*param_5);
                  FUN_18012c560(&local_60,&local_48,&local_80,&local_64);
                  if (CONCAT62(uStack_5e,CONCAT11(uStack_5f,local_60)) == 2) {
                    *(undefined1 *)(param_1 + 1) = local_58;
                    uVar7 = 2;
                  }
                  else {
                    uVar7 = 1;
                    if ((local_60 & 1) == 0) {
                      param_2[2] = local_48;
                      param_2[3] = lStack_40;
                      *param_1 = 0;
                      param_1[1] = (char *)((longlong)plVar4 +
                                           (param_4 - (longlong)plVar3) +
                                           CONCAT71(uStack_57,local_58));
                      return;
                    }
                  }
                  *param_1 = uVar7;
                  return;
                }
              }
              *param_1 = uVar7;
              return;
            }
            *(undefined1 *)(param_1 + 1) = 6;
LAB_18012d274:
            uVar7 = 2;
          }
          goto LAB_18012d27a;
        }
        if (local_78 <= (longlong *)((longlong)param_3 + 1U)) goto LAB_18012d27a;
        if (*(char *)((longlong)param_3 + 1) != '\n') {
          *(undefined1 *)(param_1 + 1) = 2;
          goto LAB_18012d274;
        }
        param_3 = (longlong *)((longlong)param_3 + 2);
        if (local_78 <= param_3) goto LAB_18012d27a;
      }
      param_3 = (longlong *)((longlong)param_3 + 1);
    } while (param_3 < local_78);
  }
LAB_18012d27a:
  *param_1 = uVar7;
  return;
}


