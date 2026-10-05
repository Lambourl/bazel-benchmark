#include "bench/fib.hpp"

// RE Benchmark TU 15709 of 20000 (depth=28, stamp="default")
namespace bench_tu_15709 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15709>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15709
