#include "bench/fib.hpp"

// RE Benchmark TU 6147 of 20000 (depth=28, stamp="default")
namespace bench_tu_6147 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6147>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6147
