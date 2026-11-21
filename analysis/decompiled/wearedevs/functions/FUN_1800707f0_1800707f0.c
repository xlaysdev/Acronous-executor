/* FUN_1800707f0 @ 1800707f0 */

ulonglong FUN_1800707f0(ulonglong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 unaff_RBX;
  undefined7 uVar9;
  ulonglong uVar8;
  ulonglong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_58;
  undefined3 local_57;
  undefined1 uStack_54;
  undefined3 uStack_53;
  undefined8 *local_48;
  ulonglong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar3 = 2;
  if (2 < *param_1) {
    lVar3 = *param_1 - 3;
  }
  if (lVar3 == 0) {
    puVar6 = (ulonglong *)param_1[0x13];
    if (puVar6 == (ulonglong *)0x0) {
LAB_180070ac2:
      uVar4 = FUN_180093fd0(param_1 + 3);
      uVar8 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
      if ((uVar4 & 1) != 0) goto LAB_180070b9b;
      if (param_2 != (undefined8 *)0x0) {
        local_40 = (ulonglong *)*param_2;
        if (local_40 != (ulonglong *)0x0) {
          local_48 = (undefined8 *)param_2[1];
          if ((code *)*local_48 != (code *)0x0) {
            (*(code *)*local_48)(local_40);
          }
          if (local_48[1] != 0) {
            thunk_FUN_1801d3330(local_40,local_48[1],local_48[2]);
          }
        }
        thunk_FUN_1801d3330(param_2,0x18,8);
      }
      local_58 = (char)param_1[0x12];
      *(undefined1 *)(param_1 + 0x12) = 3;
      if (local_58 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("Future polled twiceC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\proto\\h2\\client.rs"
                      ,0x13,&DAT_18020d3f8);
      }
      local_68 = (ulonglong *)param_1[0x10];
      uStack_60 = (undefined4)param_1[0x11];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x8c);
      local_57 = (undefined3)*(undefined4 *)((longlong)param_1 + 0x91);
      uStack_54 = (undefined1)*(undefined4 *)((longlong)param_1 + 0x94);
      uStack_53 = (undefined3)((uint)*(undefined4 *)((longlong)param_1 + 0x94) >> 8);
      FUN_18007c6c0(&local_68);
      puVar6 = (ulonglong *)param_1[2];
      uVar4 = param_1[1];
      param_1[1] = 0;
      if ((char)uVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("Future polled twiceC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\proto\\h2\\client.rs"
                      ,0x13,&DAT_18020d410);
      }
    }
    else {
      if (*(char *)((longlong)puVar6 + 0x42) == '\0') {
        puVar7 = *(undefined8 **)*param_2;
        puVar5 = (undefined8 *)(*(code *)*puVar7)(((ulonglong *)*param_2)[1]);
        LOCK();
        uVar4 = puVar6[4];
        *(char *)(puVar6 + 4) = '\x01';
        UNLOCK();
        if ((char)uVar4 == '\0') {
          local_48 = puVar5;
          local_40 = puVar6;
          if (puVar6[2] != 0) {
            (**(code **)(puVar6[2] + 0x18))(puVar6[3]);
          }
          local_40[2] = (ulonglong)local_48;
          local_40[3] = (ulonglong)puVar7;
          LOCK();
          *(undefined1 *)(local_40 + 4) = 0;
          UNLOCK();
          puVar6 = local_40;
          if (*(char *)((longlong)local_40 + 0x42) == '\0') goto LAB_180070ac2;
        }
        else {
          (*(code *)puVar5[3])(puVar7);
        }
      }
      LOCK();
      uVar4 = puVar6[8];
      *(char *)(puVar6 + 8) = '\x01';
      UNLOCK();
      if ((char)uVar4 != '\0') {
LAB_180070a3a:
        local_40 = param_1 + 0x13;
        puVar6 = (ulonglong *)*local_40;
        if (puVar6 != (ulonglong *)0x0) {
          LOCK();
          *(undefined1 *)((longlong)puVar6 + 0x42) = 1;
          UNLOCK();
          LOCK();
          uVar4 = puVar6[4];
          *(char *)(puVar6 + 4) = '\x01';
          UNLOCK();
          if ((char)uVar4 == '\0') {
            uVar4 = puVar6[2];
            puVar6[2] = 0;
            LOCK();
            *(undefined1 *)(puVar6 + 4) = 0;
            UNLOCK();
            if (uVar4 != 0) {
              (**(code **)(uVar4 + 0x18))(puVar6[3]);
            }
          }
          LOCK();
          uVar4 = puVar6[7];
          *(char *)(puVar6 + 7) = '\x01';
          UNLOCK();
          if ((char)uVar4 == '\0') {
            uVar4 = puVar6[5];
            puVar6[5] = 0;
            LOCK();
            uVar8 = puVar6[7];
            *(undefined1 *)(puVar6 + 7) = 0;
            UNLOCK();
            if (uVar4 != 0) {
              (**(code **)(uVar4 + 8))(puVar6[6],(char)uVar8);
            }
          }
          plVar1 = (longlong *)*local_40;
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_18003cda0(local_40);
          }
        }
        *local_40 = 0;
        goto LAB_180070ac2;
      }
      cVar2 = *(char *)((longlong)puVar6 + 0x41);
      *(undefined1 *)((longlong)puVar6 + 0x41) = 0;
      LOCK();
      *(undefined1 *)(puVar6 + 8) = 0;
      UNLOCK();
      if (cVar2 == '\0') goto LAB_180070a3a;
      FUN_1800858e0(param_1 + 8,8);
      local_58 = (char)param_1[0x12];
      *(undefined1 *)(param_1 + 0x12) = 3;
      if (local_58 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("Future polled twiceC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\proto\\h2\\client.rs"
                      ,0x13,&DAT_18020d3c8);
      }
      local_68 = (ulonglong *)param_1[0x10];
      uStack_60 = (undefined4)param_1[0x11];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x8c);
      local_57 = (undefined3)*(undefined4 *)((longlong)param_1 + 0x91);
      uStack_54 = (undefined1)*(undefined4 *)((longlong)param_1 + 0x94);
      uStack_53 = (undefined3)((uint)*(undefined4 *)((longlong)param_1 + 0x94) >> 8);
      FUN_18007c6c0(&local_68);
      puVar6 = (ulonglong *)param_1[2];
      uVar4 = param_1[1];
      param_1[1] = 0;
      if ((char)uVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("Future polled twiceC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\proto\\h2\\client.rs"
                      ,0x13,&DAT_18020d3e0);
      }
    }
    if (puVar6 != (ulonglong *)0x0) {
      LOCK();
      *puVar6 = *puVar6 - 1;
      UNLOCK();
      if (*puVar6 == 0) {
        local_68 = puVar6;
        FUN_180114260(&local_68);
      }
    }
LAB_180070b99:
    uVar8 = 0;
  }
  else {
    if (lVar3 == 1) {
      uVar4 = FUN_1800aceb0(param_1 + 1,param_2);
      return uVar4;
    }
    if ((char)param_1[0xb1] == '\0') {
      cVar2 = FUN_180081180(param_1,param_2);
      if (cVar2 != '\x02') goto LAB_180070b99;
    }
    uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
    uVar8 = CONCAT71(uVar9,1);
    if (param_1[0xb2] != 0) {
      cVar2 = FUN_1800acbd0();
      if (cVar2 == '\0') {
        puVar6 = (ulonglong *)param_1[0xb3];
        param_1[0xb3] = 0;
        if (puVar6 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60(&DAT_18020d44c,0x1c,&DAT_18020d468);
        }
        LOCK();
        *(undefined1 *)(puVar6 + 8) = 1;
        UNLOCK();
        LOCK();
        uVar4 = puVar6[4];
        *(char *)(puVar6 + 4) = '\x01';
        UNLOCK();
        local_68 = puVar6;
        if ((char)uVar4 == '\0') {
          uVar4 = puVar6[2];
          puVar6[2] = 0;
          LOCK();
          uVar8 = puVar6[4];
          *(undefined1 *)(puVar6 + 4) = 0;
          UNLOCK();
          if (uVar4 != 0) {
            (**(code **)(uVar4 + 8))(puVar6[3],(char)uVar8);
          }
        }
        LOCK();
        uVar4 = puVar6[7];
        *(char *)(puVar6 + 7) = '\x01';
        UNLOCK();
        if ((char)uVar4 == '\0') {
          uVar4 = puVar6[5];
          puVar6[5] = 0;
          local_40 = puVar6;
          if (uVar4 != 0) {
            (**(code **)(uVar4 + 0x18))(puVar6[6]);
          }
          LOCK();
          *(undefined1 *)(local_40 + 7) = 0;
          UNLOCK();
        }
        LOCK();
        *local_68 = *local_68 - 1;
        UNLOCK();
        if (*local_68 == 0) {
          FUN_18003cda0(&local_68);
        }
        uVar8 = CONCAT71(uVar9,1);
      }
    }
  }
LAB_180070b9b:
  return uVar8 & 0xffffffff;
}


