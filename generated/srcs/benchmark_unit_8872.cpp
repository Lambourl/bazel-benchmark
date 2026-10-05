#include "bench/fib.hpp"

// RE Benchmark TU 8872 of 20000 (depth=28, stamp="default")
namespace bench_tu_8872 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8872>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8872
