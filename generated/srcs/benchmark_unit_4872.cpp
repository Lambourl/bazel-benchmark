#include "bench/fib.hpp"

// RE Benchmark TU 4872 of 20000 (depth=28, stamp="default")
namespace bench_tu_4872 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4872>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4872
