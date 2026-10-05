#include "bench/fib.hpp"

// RE Benchmark TU 19121 of 20000 (depth=28, stamp="default")
namespace bench_tu_19121 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19121>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19121
