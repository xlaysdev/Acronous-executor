/* FUN_1801b16c0 @ 1801b16c0 */

void FUN_1801b16c0(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  cVar4 = '\x03';
  if (param_3 != 0) {
    if (param_3 < 0x41) {
      uVar3 = (ulonglong)((uint)param_3 & 3);
      if (param_3 < 4) {
        uVar5 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(undefined1 *)(param_4 + uVar6) =
               *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + uVar6));
          *(undefined1 *)(param_4 + 1 + uVar6) =
               *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + 1 + uVar6));
          *(undefined1 *)(param_4 + 2 + uVar6) =
               *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + 2 + uVar6));
          uVar5 = uVar6 + 4;
          *(undefined1 *)(param_4 + 3 + uVar6) =
               *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + 3 + uVar6));
          uVar6 = uVar5;
        } while (((uint)param_3 & 0x7c) != uVar5);
      }
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          *(undefined1 *)(param_4 + uVar5 + uVar6) =
               *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + uVar5 + uVar6));
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
      cVar1 = FUN_1801aec10(param_4);
      if (cVar1 == 'Q') {
        if (param_3 < 0x10) {
          uVar3 = 0;
          do {
            if (*(char *)(param_4 + uVar3) == '\0') goto LAB_1801b17fe;
            uVar3 = uVar3 + 1;
          } while (param_3 != uVar3);
        }
        else {
          lVar2 = FUN_1801f2f70(0,param_4,param_3);
          if (lVar2 == 1) goto LAB_1801b17fe;
        }
        *param_1 = param_4;
        param_1[1] = param_3;
        cVar4 = '\x01';
      }
      else {
        *(char *)param_1 = cVar1;
        cVar4 = '\x02';
      }
    }
    else if (param_3 < 0x10000) {
      *param_1 = param_2;
      param_1[1] = param_3;
      cVar4 = '\0';
    }
  }
LAB_1801b17fe:
  *(char *)(param_1 + 2) = cVar4;
  return;
}


