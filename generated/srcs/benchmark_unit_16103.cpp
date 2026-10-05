#include "bench/fib.hpp"

// RE Benchmark TU 16103 of 20000 (depth=28, stamp="default")
namespace bench_tu_16103 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16103>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16103
