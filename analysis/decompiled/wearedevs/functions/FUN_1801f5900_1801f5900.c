/* FUN_1801f5900 @ 1801f5900 */

void FUN_1801f5900(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = param_2[1];
  if (uVar4 == 0) {
    *param_1 = 0;
  }
  else {
    lVar5 = *param_2;
    uVar7 = 0;
    do {
      bVar1 = *(byte *)(lVar5 + uVar7);
      uVar8 = uVar7 + 1;
      if ((char)bVar1 < '\0') {
        cVar2 = (&DAT_180293798)[bVar1];
        if (cVar2 == '\x04') {
          pcVar6 = (char *)(lVar5 + uVar8);
          if (uVar4 <= uVar8) {
            pcVar6 = "";
          }
          cVar2 = *pcVar6;
          if ((ulonglong)bVar1 == 0xf0) {
            if (0x2f < (byte)(cVar2 + 0x70U)) break;
          }
          else if (bVar1 == 0xf4) {
            if (-0x71 < cVar2) break;
          }
          else if ((2 < (byte)(bVar1 + 0xf)) || (-0x41 < cVar2)) break;
          uVar8 = uVar7 + 2;
          pcVar6 = (char *)(lVar5 + 2 + uVar7);
          if (uVar4 <= uVar8) {
            pcVar6 = "";
          }
          if (-0x41 < *pcVar6) break;
          uVar8 = uVar7 + 3;
          pcVar6 = (char *)(lVar5 + 3 + uVar7);
          if (uVar4 <= uVar8) {
            pcVar6 = "";
          }
          if (-0x41 < *pcVar6) break;
          uVar8 = uVar7 + 4;
        }
        else if (cVar2 == '\x03') {
          pcVar6 = (char *)(lVar5 + uVar8);
          if (uVar4 <= uVar8) {
            pcVar6 = "";
          }
          bVar3 = *pcVar6;
          if (bVar1 == 0xe0) {
            if ((bVar3 & 0xe0) != 0xa0) break;
          }
          else if (bVar1 == 0xed) {
            if (-0x61 < (char)bVar3) break;
          }
          else if (((0xb < (byte)(bVar1 + 0x1f)) && ((bVar1 & 0xfe) != 0xee)) ||
                  (-0x41 < (char)bVar3)) break;
          uVar8 = uVar7 + 2;
          pcVar6 = (char *)(lVar5 + 2 + uVar7);
          if (uVar4 <= uVar8) {
            pcVar6 = "";
          }
          if (-0x41 < *pcVar6) break;
          uVar8 = uVar7 + 3;
        }
        else {
          if (cVar2 != '\x02') break;
          pcVar6 = (char *)(lVar5 + uVar8);
          if (uVar4 <= uVar8) {
            pcVar6 = "";
          }
          if (-0x41 < *pcVar6) break;
          uVar8 = uVar7 + 2;
        }
      }
      uVar7 = uVar8;
      uVar8 = uVar7;
    } while (uVar7 < uVar4);
    *param_2 = lVar5 + uVar8;
    param_2[1] = uVar4 - uVar8;
    *param_1 = lVar5;
    param_1[1] = uVar7;
    param_1[2] = lVar5 + uVar7;
    param_1[3] = uVar8 - uVar7;
  }
  return;
}


