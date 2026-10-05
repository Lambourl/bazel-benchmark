#include "bench/fib.hpp"

// RE Benchmark TU 814 of 20000 (depth=28, stamp="default")
namespace bench_tu_814 {
constexpr unsigned long long result = ::bench::slow_fib<28, 814>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_814
