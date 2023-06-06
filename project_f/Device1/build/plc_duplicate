PROGRAM program1
  VAR
    run : BOOL := 1;
    A_M : BOOL := 1;
    start : BOOL := 0;
    state_after : BOOL := 0;
    state_heat : BOOL := 0;
    state_fan : BOOL := 0;
    push_after : BOOL := 0;
    is_sort1 : BOOL := 0;
    is_sort2 : BOOL := 0;
    choose_1 : BOOL := 0;
    choose_2 : BOOL := 0;
    choose_3 : BOOL := 0;
    IN1 : BOOL := FALSE;
    start_heat : BOOL;
    start_ui : BOOL;
    auto_ui : BOOL;
    try : BOOL;
    UDINT_TO_REAL41_ENO : BOOL;
    MUL_REAL42_ENO : BOOL;
    SUB_REAL43_ENO : BOOL;
    MUL_REAL44_ENO : BOOL;
    MOVE_STRING30_ENO : BOOL;
    MOVE_STRING29_ENO : BOOL;
    MOVE_STRING33_ENO : BOOL;
    MOVE_STRING77_ENO : BOOL;
    COMPARE_STRING204_ENO : BOOL;
    COMPARE_STRING204_OUT : BOOL;
    COMPARE_STRING211_ENO : BOOL;
    COMPARE_STRING211_OUT : BOOL;
    COMPARE_STRING216_ENO : BOOL;
    COMPARE_STRING216_OUT : BOOL;
    MOVE_TIME236_ENO : BOOL;
    MOVE_TIME239_ENO : BOOL;
    MOVE_TIME242_ENO : BOOL;
    MOVE_STRING229_ENO : BOOL;
    ADD_REAL19_ENO : BOOL;
    SUB_REAL51_ENO : BOOL;
    TIME_TO_REAL469_ENO : BOOL;
    TIME_TO_REAL472_ENO : BOOL;
    DIV_REAL478_ENO : BOOL;
    MUL_REAL511_ENO : BOOL;
    REAL_TO_UDINT516_ENO : BOOL;
    temp_branch_var_1 : BOOL;
    temp_branch_var_2 : BOOL;
    temp_branch_var_3 : BOOL;
    tf : REAL;
    Temp : REAL;
    Duty1 : REAL := 20.0;
    heat_timereal : REAL;
    T_TIMEreal : REAL;
    UDINT_TO_REAL41_OUT : REAL;
    MUL_REAL42_OUT : REAL;
    SUB_REAL43_OUT : REAL;
    MUL_REAL44_OUT : REAL;
    ADD_REAL19_OUT : REAL;
    SUB_REAL51_OUT : REAL;
    TIME_TO_REAL469_OUT : REAL;
    TIME_TO_REAL472_OUT : REAL;
    DIV_REAL478_OUT : REAL;
    MUL_REAL511_OUT : REAL;
    types : STRING := '0';
    MOVE_STRING30_OUT : STRING;
    MOVE_STRING29_OUT : STRING;
    MOVE_STRING33_OUT : STRING;
    MOVE_STRING77_OUT : STRING;
    MOVE_STRING229_OUT : STRING;
    heat_time : TIME := t#0.5s;
    T_HEAT : TIME;
    T_Motor : TIME;
    T_After : TIME;
    T_Push : TIME;
    T_Push0 : TIME;
    time_temp : TIME;
    temp1 : TIME;
    MOVE_TIME236_OUT : TIME;
    MOVE_TIME239_OUT : TIME;
    MOVE_TIME242_OUT : TIME;
    Mode : BYTE := 2;
    Freq1 : UDINT := 100;
    REAL_TO_UDINT516_OUT : UDINT;
    GD0 : bool := 0;
    GD1 : bool := 0;
    GD2 : bool := 0;
    GD3 : bool := 0;
    PIPO_Config_inst1 : PIPO_Config;
    PIPO_Config_inst2 : PIPO_Config;
    PIPO_PWMB_inst1 : PIPO_PWMB;
    TON_inst1 : TON;
    TON_inst2 : TON;
    TON_inst3 : TON;
    TON_inst4 : TON;
    TON_inst5 : TON;
    TON_inst6 : TON;
    TON_inst9 : TON;
    TOF_inst1 : TOF;
    TOF_inst2 : TOF;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
    R_TRIG5 : R_TRIG;
    F_TRIG1 : F_TRIG;
    F_TRIG2 : F_TRIG;
  END_VAR
  VAR
    T_percentage AT %MQD0 : UDINT;
    AIO211_AI_CH1 AT %MID0 : UDINT;
    forward AT %QX0.8 : BOOL;
    AMswitch AT %QX0.6 : BOOL;
    Feng AT %QX0.7 : BOOL;
    trigger AT %QX0.5 : BOOL;
    DI211_CH6 AT %IX0.5 : BOOL;
    DI211_CH7 AT %IX0.6 : BOOL;
    DI211_CH8 AT %IX0.7 : BOOL;
    DI211_CH9 AT %IX1.0 : BOOL;
    DI211_CH10 AT %IX1.1 : BOOL;
    DI211_CH11 AT %IX1.2 : BOOL;
    DI211_CH12 AT %IX1.3 : BOOL;
    DO211_CH1 AT %QX0.0 : BOOL;
    DO211_CH2 AT %QX0.1 : BOOL;
    DO211_CH3 AT %QX0.2 : BOOL;
    DO211_CH4 AT %QX0.3 : BOOL;
    DO211_CH5 AT %QX0.4 : BOOL;
  END_VAR

  UDINT_TO_REAL41_OUT := UDINT_TO_REAL(EN := run, IN := AIO211_AI_CH1, ENO => UDINT_TO_REAL41_ENO);
  IF UDINT_TO_REAL41_ENO THEN
      tf := UDINT_TO_REAL41_OUT;
  END_IF;
  MUL_REAL42_OUT := MUL_REAL(EN := UDINT_TO_REAL41_ENO, IN1 := tf, IN2 := 0.02, ENO => MUL_REAL42_ENO);
  IF MUL_REAL42_ENO THEN
      tf := MUL_REAL42_OUT;
  END_IF;
  SUB_REAL43_OUT := SUB_REAL(EN := MUL_REAL42_ENO, IN1 := tf, IN2 := 4.0, ENO => SUB_REAL43_ENO);
  IF SUB_REAL43_ENO THEN
      tf := SUB_REAL43_OUT;
  END_IF;
  MUL_REAL44_OUT := MUL_REAL(EN := SUB_REAL43_ENO, IN1 := tf, IN2 := 6.25, ENO => MUL_REAL44_ENO);
  IF MUL_REAL44_ENO THEN
      Temp := MUL_REAL44_OUT;
  END_IF;
  temp_branch_var_1 := run;
  temp_branch_var_2 := A_M AND temp_branch_var_1;
  IN1 := forward AND NOT(A_M) AND temp_branch_var_1 OR (NOT(start) OR NOT(state_heat) AND start OR state_after AND start) AND temp_branch_var_2;
  TON_inst6(IN := state_after AND start AND run, PT := T#0.3s);
    T_Push := TON_inst6.ET;
  push_after := TON_inst6.Q;
  temp_branch_var_1 := run;
  R_TRIG1(CLK := push_after);
  IF NOT(choose_3) AND NOT(choose_2) AND choose_1 AND R_TRIG1.Q AND A_M AND temp_branch_var_1 THEN
    DO211_CH1 := TRUE; (*set*)
  END_IF;
  temp_branch_var_2 := NOT(A_M) AND temp_branch_var_1;
  IF NOT(trigger) AND temp_branch_var_2 THEN
    DO211_CH1 := FALSE; (*reset*)
  END_IF;
  IF trigger AND temp_branch_var_2 THEN
    DO211_CH1 := TRUE; (*set*)
  END_IF;
  TON_inst9(IN := DO211_CH1 AND A_M AND temp_branch_var_1, PT := T#2s);
    temp1 := TON_inst9.ET;
  IF TON_inst9.Q THEN
    DO211_CH1 := FALSE; (*reset*)
  END_IF;
  temp_branch_var_1 := run;
  start := (GD1 OR start) AND temp_branch_var_1;
  TON_inst1(IN := start AND run, PT := T#0.7s);
    T_Motor := TON_inst1.ET;
    state_heat := TON_inst1.Q;
  temp_branch_var_1 := start AND run;
  MOVE_STRING30_OUT := MOVE_STRING(EN := (GD3 OR is_sort1) AND temp_branch_var_1, IN := '3', ENO => MOVE_STRING30_ENO);
  IF MOVE_STRING30_ENO THEN
      types := MOVE_STRING30_OUT;
  END_IF;
  is_sort1 := MOVE_STRING30_ENO;
  MOVE_STRING29_OUT := MOVE_STRING(EN := NOT(is_sort1) AND temp_branch_var_1, IN := '1', ENO => MOVE_STRING29_ENO);
  IF MOVE_STRING29_ENO THEN
      types := MOVE_STRING29_OUT;
  END_IF;
  temp_branch_var_1 := start AND run;
  MOVE_STRING33_OUT := MOVE_STRING(EN := (GD2 OR is_sort2) AND temp_branch_var_1, IN := '2', ENO => MOVE_STRING33_ENO);
  IF MOVE_STRING33_ENO THEN
      types := MOVE_STRING33_OUT;
  END_IF;
  is_sort2 := MOVE_STRING33_ENO;
  MOVE_STRING77_OUT := MOVE_STRING(EN := NOT(is_sort2) AND temp_branch_var_1, IN := '1', ENO => MOVE_STRING77_ENO);
  IF MOVE_STRING77_ENO THEN
      types := MOVE_STRING77_OUT;
  END_IF;
  temp_branch_var_1 := start AND run;
  COMPARE_STRING204_OUT := COMPARE_STRING(EN := temp_branch_var_1, IN1 := types, IN2 := '1', ENO => COMPARE_STRING204_ENO);
  IF COMPARE_STRING204_ENO THEN
      choose_1 := COMPARE_STRING204_OUT;
  END_IF;
  COMPARE_STRING211_OUT := COMPARE_STRING(EN := temp_branch_var_1, IN1 := types, IN2 := '2', ENO => COMPARE_STRING211_ENO);
  IF COMPARE_STRING211_ENO THEN
      choose_2 := COMPARE_STRING211_OUT;
  END_IF;
  COMPARE_STRING216_OUT := COMPARE_STRING(EN := temp_branch_var_1, IN1 := types, IN2 := '3', ENO => COMPARE_STRING216_ENO);
  IF COMPARE_STRING216_ENO THEN
      choose_3 := COMPARE_STRING216_OUT;
  END_IF;
  MOVE_TIME236_OUT := MOVE_TIME(EN := choose_1 AND temp_branch_var_1, IN := T#5s, ENO => MOVE_TIME236_ENO);
  IF MOVE_TIME236_ENO THEN
      heat_time := MOVE_TIME236_OUT;
  END_IF;
  MOVE_TIME239_OUT := MOVE_TIME(EN := choose_2 AND temp_branch_var_1, IN := T#2s, ENO => MOVE_TIME239_ENO);
  MOVE_TIME242_OUT := MOVE_TIME(EN := choose_3 AND temp_branch_var_1, IN := T#3s, ENO => MOVE_TIME242_ENO);
  MOVE_STRING229_OUT := MOVE_STRING(EN := MOVE_TIME236_ENO OR MOVE_TIME239_ENO OR MOVE_TIME242_ENO, IN := '0', ENO => MOVE_STRING229_ENO);
  IF MOVE_STRING229_ENO THEN
      types := MOVE_STRING229_OUT;
  END_IF;
  IF MOVE_TIME239_ENO THEN
      heat_time := MOVE_TIME239_OUT;
  END_IF;
  IF MOVE_TIME242_ENO THEN
      heat_time := MOVE_TIME242_OUT;
  END_IF;
  temp_branch_var_1 := run;
  temp_branch_var_2 := start AND (A_M AND temp_branch_var_1);
  R_TRIG2(CLK := state_heat);
  TOF_inst2(IN := R_TRIG2.Q AND temp_branch_var_2, PT := heat_time);
    T_HEAT := TOF_inst2.ET;
    state_fan := TOF_inst2.Q;
  DO211_CH2 := state_fan AND temp_branch_var_2;
  F_TRIG1(CLK := state_fan);
  TOF_inst1(IN := F_TRIG1.Q AND temp_branch_var_2, PT := T#0.5s);
    T_After := TOF_inst1.ET;
    state_after := TOF_inst1.Q;
  F_TRIG2(CLK := state_after);
  temp_branch_var_3 := F_TRIG2.Q AND temp_branch_var_2;
  IF temp_branch_var_3 THEN
    start := FALSE; (*reset*)
  END_IF;
  IF temp_branch_var_3 THEN
    start_heat := FALSE; (*reset*)
  END_IF;
  DO211_CH2 := (Feng AND NOT(A_M) OR state_fan AND start AND A_M) AND temp_branch_var_1;
  temp_branch_var_1 := run;
  R_TRIG3(CLK := run);
  PIPO_Config_inst1(EN := R_TRIG3.Q AND temp_branch_var_1, Channel := 0, Mode := Mode);
  PIPO_PWMB_inst1(EN := temp_branch_var_1, Channel := 0, IN := IN1, Duty := Duty1, Freq := Freq1);
  temp_branch_var_1 := A_M AND run;
  R_TRIG4(CLK := DI211_CH7);
  ADD_REAL19_OUT := ADD_REAL(EN := R_TRIG4.Q AND temp_branch_var_1, IN1 := Duty1, IN2 := 0.0, ENO => ADD_REAL19_ENO);
  IF ADD_REAL19_ENO THEN
      Duty1 := ADD_REAL19_OUT;
  END_IF;
  R_TRIG5(CLK := DI211_CH8);
  SUB_REAL51_OUT := SUB_REAL(EN := R_TRIG5.Q AND temp_branch_var_1, IN1 := Duty1, IN2 := 0.0, ENO => SUB_REAL51_ENO);
  IF SUB_REAL51_ENO THEN
      Duty1 := SUB_REAL51_OUT;
  END_IF;
  TON_inst2(IN := GD0 AND temp_branch_var_1, PT := T#50ms);
  IF TON_inst2.Q THEN
    DI211_CH7 := FALSE; (*reset*)
  END_IF;
  TON_inst3(IN := GD1 AND temp_branch_var_1, PT := T#50ms);
  IF TON_inst3.Q THEN
    DI211_CH8 := FALSE; (*reset*)
  END_IF;
  TON_inst4(IN := GD2 AND temp_branch_var_1, PT := T#0.2s);
  IF TON_inst4.Q THEN
    DI211_CH9 := FALSE; (*reset*)
  END_IF;
  TON_inst5(IN := GD3 AND temp_branch_var_1, PT := T#0.2s);
  IF TON_inst5.Q THEN
    DI211_CH10 := FALSE; (*reset*)
  END_IF;
  GD0 := DI211_CH7 AND temp_branch_var_1;
  GD1 := DI211_CH8 AND temp_branch_var_1;
  GD2 := DI211_CH9 AND temp_branch_var_1;
  GD3 := DI211_CH10 AND temp_branch_var_1;
  run := NOT(DI211_CH11) OR run;
  run := NOT(NOT(DI211_CH12) OR NOT(run));
  run := DO211_CH3 OR run;
  run := NOT(NOT(run) OR DO211_CH4);
  PIPO_Config_inst2(EN := NOT(run), Channel := 0, Mode := 0);
  TIME_TO_REAL469_OUT := TIME_TO_REAL(EN := TRUE, IN := heat_time, ENO => TIME_TO_REAL469_ENO);
  IF TIME_TO_REAL469_ENO THEN
      heat_timereal := TIME_TO_REAL469_OUT;
  END_IF;
  TIME_TO_REAL472_OUT := TIME_TO_REAL(EN := TIME_TO_REAL469_ENO, IN := T_HEAT, ENO => TIME_TO_REAL472_ENO);
  IF TIME_TO_REAL472_ENO THEN
      T_TIMEreal := TIME_TO_REAL472_OUT;
  END_IF;
  DIV_REAL478_OUT := DIV_REAL(EN := TIME_TO_REAL472_ENO, IN1 := T_TIMEreal, IN2 := heat_timereal, ENO => DIV_REAL478_ENO);
  IF DIV_REAL478_ENO THEN
      T_TIMEreal := DIV_REAL478_OUT;
  END_IF;
  MUL_REAL511_OUT := MUL_REAL(EN := DIV_REAL478_ENO, IN1 := T_TIMEreal, IN2 := 100.0, ENO => MUL_REAL511_ENO);
  IF MUL_REAL511_ENO THEN
      T_TIMEreal := MUL_REAL511_OUT;
  END_IF;
  REAL_TO_UDINT516_OUT := REAL_TO_UDINT(EN := MUL_REAL511_ENO, IN := T_TIMEreal, ENO => REAL_TO_UDINT516_ENO);
  IF REAL_TO_UDINT516_ENO THEN
      T_percentage := REAL_TO_UDINT516_OUT;
  END_IF;
  A_M := AMswitch OR DI211_CH6;
END_PROGRAM


CONFIGURATION config

  RESOURCE resource1 ON PLC
    TASK task1(PRIORITY := 1);
    PROGRAM task1_inst1 WITH task1 : program1;
  END_RESOURCE
END_CONFIGURATION
