#include "bench/fib.hpp"

// RE Benchmark TU 10055 of 20000 (depth=28, stamp="default")
namespace bench_tu_10055 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10055>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10055
