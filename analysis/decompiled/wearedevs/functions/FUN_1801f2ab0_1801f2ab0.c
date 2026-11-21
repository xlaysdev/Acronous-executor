/* FUN_1801f2ab0 @ 1801f2ab0 */

void FUN_1801f2ab0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  if (0xe < param_3) {
    uVar8 = param_3 - 0xf;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(param_2 + uVar4);
      uVar7 = (ulonglong)bVar1;
      if ((char)bVar1 < '\0') {
        cVar2 = (&DAT_180293798)[uVar7];
        uVar9 = 1;
        if (cVar2 == '\x04') {
          if (uVar4 + 1 < param_3) {
            cVar2 = *(char *)(param_2 + uVar4 + 1);
            if (uVar7 == 0xf0) {
              if ((byte)(cVar2 + 0x70U) < 0x30) goto LAB_1801f2c60;
            }
            else if (bVar1 == 0xf4) {
              if (cVar2 < -0x70) {
LAB_1801f2c60:
                uVar7 = uVar4 + 2;
                if (uVar7 < param_3) {
                  if (-0x41 < *(char *)(param_2 + uVar7)) goto LAB_1801f2c9c;
                  uVar10 = uVar4 + 3;
                  if (uVar10 < param_3) {
                    if (*(char *)(param_2 + uVar10) < -0x40) goto LAB_1801f2b00;
                    uVar6 = 3;
                    goto LAB_1801f2c9e;
                  }
                }
                goto LAB_1801f2c93;
              }
            }
            else if (((byte)(bVar1 + 0xf) < 3) && (cVar2 < -0x40)) goto LAB_1801f2c60;
            goto LAB_1801f2c98;
          }
LAB_1801f2c93:
          uVar6 = (undefined1)uVar7;
          uVar9 = 0;
        }
        else if (cVar2 == '\x03') {
          if (param_3 <= uVar4 + 1) goto LAB_1801f2c93;
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar7 == 0xe0) {
            if ((bVar3 & 0xe0) == 0xa0) goto LAB_1801f2c3c;
          }
          else if (bVar1 == 0xed) {
            if ((char)bVar3 < -0x60) {
LAB_1801f2c3c:
              uVar10 = uVar4 + 2;
              if (param_3 <= uVar10) goto LAB_1801f2c93;
              if (*(char *)(param_2 + uVar10) < -0x40) goto LAB_1801f2b00;
LAB_1801f2c9c:
              uVar6 = 2;
              goto LAB_1801f2c9e;
            }
          }
          else if ((((byte)(bVar1 + 0x1f) < 0xc) ||
                   (uVar7 = (ulonglong)(bVar1 & 0xfe), (bVar1 & 0xfe) == 0xee)) &&
                  ((char)bVar3 < -0x40)) goto LAB_1801f2c3c;
LAB_1801f2c98:
          uVar6 = 1;
        }
        else {
          if (cVar2 != '\x02') goto LAB_1801f2c98;
          uVar10 = uVar4 + 1;
          if (param_3 <= uVar10) goto LAB_1801f2c93;
          uVar6 = 1;
          if (*(char *)(param_2 + uVar10) < -0x40) {
LAB_1801f2b00:
            uVar4 = uVar10 + 1;
            goto LAB_1801f2b06;
          }
        }
LAB_1801f2c9e:
        param_1[1] = uVar4;
        *(undefined1 *)(param_1 + 2) = uVar9;
        *(undefined1 *)((longlong)param_1 + 0x11) = uVar6;
        uVar5 = 1;
        goto LAB_1801f2cae;
      }
      if ((-(int)uVar4 - (int)param_2 & 7U) == 0) {
        while ((uVar4 < uVar8 &&
               (((*(ulonglong *)(param_2 + 8 + uVar4) | *(ulonglong *)(param_2 + uVar4)) &
                0x8080808080808080) == 0))) {
          uVar4 = uVar4 + 0x10;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_1801f2c87;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
LAB_1801f2b06:
    } while (uVar4 < param_3);
  }
LAB_1801f2c87:
  param_1[1] = param_2;
  param_1[2] = param_3;
  uVar5 = 0;
LAB_1801f2cae:
  *param_1 = uVar5;
  return;
}


