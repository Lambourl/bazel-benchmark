#include "bench/fib.hpp"

// RE Benchmark TU 14732 of 20000 (depth=28, stamp="default")
namespace bench_tu_14732 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14732>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14732
