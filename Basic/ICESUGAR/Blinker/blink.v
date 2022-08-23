module blink (
    input clock,
    output [5:0] led
);

   localparam BITS = 25;
   reg [BITS-1:0] counter;

   always@(posedge clock) begin
      counter <= counter + 1;
   end

   assign led = counter[BITS-1 : BITS-6];

endmodule